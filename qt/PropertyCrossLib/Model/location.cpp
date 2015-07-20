#include "location.h"

Location::Location(QObject *parent):
   QObject(parent)

{

}

Location::Location(const QJsonObject &jsonObj, QObject *parent ) :  QObject(parent){

    m_displayName             = jsonObj.value(QString("long_title")).toString();
    m_name             = jsonObj.value(QString("place_name")).toString();
}

QString Location::getDisplayName() const
{
    return m_displayName;
}

void Location::setDisplayName(const QString &value)
{
    m_displayName = value;
}
QString Location::getName() const
{
    return m_name;
}

void Location::setName(const QString &value)
{
    m_name = value;
}



