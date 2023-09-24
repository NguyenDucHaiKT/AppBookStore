#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<QObject>
class Customer
{
public:
    enum class CustomerSex
    {
        Male,
        Female,
    }
    Customer();
    Customer(QString,QString,int,QString);
    QString nameCustomer() const;
    void setNameCustomer(const QString &newNameCustomer);
    QString address() const;
    void setAddress(const QString &newAddress);
    QString phoneNumber() const;
    void setPhoneNumber(const QString &newPhoneNumber);

private:
    QString m_nameCustomer;
    QString m_address;
    QString m_phoneNumber;
};

#endif // CUSTOMER_H
