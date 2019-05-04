#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QSqlQuery>
#include <iostream>
#include <QCoreApplication>
#include <QSqlError>

#include "DBManager.h"

DBManager::DBManager()
{
    appPath_ = QCoreApplication::applicationDirPath();
    dbPath_ = appPath_ + "/" + dbName_;
    scriptPath_ = appPath_ + "/" + scriptName_;

    if(!QSqlDatabase::isDriverAvailable("QSQLITE"))
    {
        std::cout << "sqlite driver not available" << std::endl;
        dbCreateResult_ = false;
        return;
    }

    db_ = QSqlDatabase::addDatabase("QSQLITE");
    db_.setDatabaseName(dbPath_);

    Init();
}

DBManager::~DBManager()
{
    if(db_.isOpen())
    {
        db_.close();
    }
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
        // db file not found, open db connection and create new db file
        if(!db_.open())
        {
            std::cout << "database file cannot be opened" << std::endl;
            return;
        }

        if(!db_.isOpen())
        {
            std::cout << "database is not opened" << std::endl;
            return;
        }

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
            db_.commit();
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

        QSqlQuery query(db_);
        bool res = query.exec(script);

        std::cout << "Query: " <<
                     query.lastQuery().toStdString() << std::endl;

        if(!res)
        {
            std::cout << "Script problem on execute " <<
                         query.lastQuery().toStdString() << std::endl;
            std::cout << "Script problem on execute " <<
                         query.lastError().text().toStdString() << std::endl;
            return false;
        }
    }

    return true;
}
