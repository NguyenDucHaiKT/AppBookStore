#ifndef BOOK_H
#define BOOK_H

#include<QObject>

class Book
{
public:
    Book();
    Book(QString,QString,int,double,int);
    QString kindBook() const;
    void setKindBook(const QString &newKindBook);
    QString nameBook() const;
    void setNameBook(const QString &newNameBook);
    int idBook() const;
    void setIdBook(int newIdBook);
    double priceBook() const;
    void setPriceBook(double newPriceBook);
    int countBook() const;
    void setCountBook(int newCountBook);
    ~Book();
private:
    QString m_kindBook;
    QString m_nameBook;
    int m_idBook;
    double m_priceBook;
    int m_countBook;
};

#endif // BOOK_H
