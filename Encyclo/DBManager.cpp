#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QSqlQuery>
#include <iostream>
#include <QCoreApplication>

#include "DBManager.h"

DBManager::DBManager()
{
    appPath_ = QCoreApplication::applicationDirPath();
    dbPath_ = appPath_ + "/" + dbName_;
    scriptPath_ = appPath_ + "/" + scriptName_;

    Init();
}

bool DBManager::GetDBCreateResult() const
{
    return dbCreateResult_;
}

void DBManager::Init()
{
    QFile dbFile(dbPath_);

    if(dbFile.exists())
    {
        if(dbFile.size() == 0)
        {
            // db file was corrupted
            // remove this file and create again
            dbFile.remove();
            Create();
        }
        else
        {
            // db file already exists, do nothing
            return;
        }
    }
    else
    {
        // db file not found, create new db file
        Create();
    }
}

void DBManager::Create()
{
    QFile scriptFile(scriptPath_);

    if(!scriptFile.exists())
    {
        // script file not found
        ShowScriptNotFoundMessageBox();
    }
    else
    {
        if(!RunScript())
        {
            ShowCannotRunScriptMessageBox();
        }
    }
}

void DBManager::ShowScriptNotFoundMessageBox()
{
    QMessageBox msgBox;
    msgBox.setText("Script file not found. Application will be closed.");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int res = msgBox.exec();

    if(res == QMessageBox::Ok)
    {
        dbCreateResult_ = false;
    }
}

void DBManager::ShowCannotRunScriptMessageBox()
{
    QMessageBox msgBox;
    msgBox.setText("Cannot run script. Application will be closed.");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int res = msgBox.exec();

    if(res == QMessageBox::Ok)
    {
        dbCreateResult_ = false;
    }
}

bool DBManager::RunScript()
{
    QFile scriptFile(scriptPath_);
    if(!scriptFile.open(QFile::ReadOnly | QFile::Text))
    {
        return false;
    }

    QTextStream stream(&scriptFile);
    stream.setCodec("UTF-8");

    QStringList scripts = stream.readAll().split(';');

    foreach(const auto& script, scripts)
    {
        if(script.isEmpty())
        {
            continue;
        }

        QSqlQuery query;
        if(!query.exec(script))
        {
            std::cout << "Script problem on execute" << std::endl;
            return false;
        }
    }

    return true;
}
