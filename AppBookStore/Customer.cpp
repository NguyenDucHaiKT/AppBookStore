#include "Customer.h"

Customer::Customer()
{

}

Customer::Customer(QString, QString, int, QString)
{

}

QString Customer::nameCustomer() const
{
    return m_nameCustomer;
}

void Customer::setNameCustomer(const QString &newNameCustomer)
{
    m_nameCustomer = newNameCustomer;
}

QString Customer::address() const
{
    return m_address;
}

void Customer::setAddress(const QString &newAddress)
{
    m_address = newAddress;
}

QString Customer::phoneNumber() const
{
    return m_phoneNumber;
}

void Customer::setPhoneNumber(const QString &newPhoneNumber)
{
    m_phoneNumber = newPhoneNumber;
}
