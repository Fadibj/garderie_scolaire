#include "connection.h"
#include <QSqlDatabase>
#include <QSqlQuery>
Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("source_Project2A");
db.setUserName("fadi");//inserer nom de l'utilisateur
db.setPassword("esprit18");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;


    return  test;
}
void Connection::closeconnection(){db.close();}
