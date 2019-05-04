#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QString>

class DBManager
{

public:

    DBManager();
    bool GetDBCreateResult() const;

private:

    void Init();
    void Create();
    void ShowScriptNotFoundMessageBox();
    void ShowCannotRunScriptMessageBox();
    bool RunScript();

    const QString dbName_ = "encyclodb";
    const QString scriptName_ = "script.sql";
    QString dbPath_;
    QString scriptPath_;
    QString appPath_;

    bool dbCreateResult_ = true;
};

#endif // DBMANAGER_H
