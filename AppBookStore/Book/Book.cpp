#include "Book.h"

Book::Book()
{

}

QString Book::kindBook() const
{
    return m_kindBook;
}

void Book::setKindBook(const QString &newKindBook)
{
    m_kindBook = newKindBook;
}

QString Book::nameBook() const
{
    return m_nameBook;
}

void Book::setNameBook(const QString &newNameBook)
{
    m_nameBook = newNameBook;
}

int Book::idBook() const
{
    return m_idBook;
}

void Book::setIdBook(int newIdBook)
{
    m_idBook = newIdBook;
}

double Book::priceBook() const
{
    return m_priceBook;
}

void Book::setPriceBook(double newPriceBook)
{
    m_priceBook = newPriceBook;
}

int Book::countBook() const
{
    return m_countBook;
}

void Book::setCountBook(int newCountBook)
{
    m_countBook = newCountBook;
}
