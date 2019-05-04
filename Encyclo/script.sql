/* Disable foreign keys */
PRAGMA foreign_keys = 'off';

/* Begin transaction */
BEGIN;

/* Database properties */
PRAGMA auto_vacuum = 0;
PRAGMA encoding = 'UTF-8';
PRAGMA page_size = 4096;
PRAGMA synchronize = OFF;

/* Drop table [Users] */
DROP TABLE IF EXISTS [main].[Users];

CREATE TABLE [main].[Users] (
    [id]            INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    [Email]         VARCHAR(128) NOT NULL UNIQUE,
    [Username]	    NVARCHAR(128) NOT NULL UNIQUE,
    [Password]      VARCHAR(32) NOT NULL,
    [Country]       VARCHAR(8) NOT NULL,
    [Language]      VARCHAR(8) NOT NULL,
    [CreationDate]  DATETIME NOT NULL);

/* Empty table [Users] */
DELETE FROM [main].[Users];

/* Table data [Users] Record count: 3 */
INSERT INTO [Users]([Email], [Username], [Password], [Country], [Language], [CreationDate]) VALUES('monokino.lviv@gmail.com', 'Admin', '1234', 'UA', 'en-US', '05-05-2017 01:05:29');
INSERT INTO [Users]([Email], [Username], [Password], [Country], [Language], [CreationDate]) VALUES('user1@gmail.com', 'User 1', 'abcd', 'US', 'en-US', '05-05-2017 01:06:29');
INSERT INTO [Users]([Email], [Username], [Password], [Country], [Language], [CreationDate]) VALUES('user2@gmail.com', 'User 2', 'abcd', 'GB', 'en-US', '05-05-2017 01:07:29');

/* Commit transaction */
COMMIT;

/* Enable foreign keys */
PRAGMA foreign_keys = 'on';