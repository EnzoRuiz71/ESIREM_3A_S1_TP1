#include <iostream>
#include <string>
#include "borrow.h"

Borrow::Borrow(Date date, Book book, Reader reader) : _date(date), _book(book), _reader(reader) {}
Date Borrow::date() const
{
	return _date;
	
}

Book Borrow::book() const
{
	return _book;
}

Reader Borrow::reader() const
{
	return _reader;
}
