#include <iostream>
#include <string>
#include "date.h"
#include "reader.h"
#include "book.h"

#ifndef BORROW_H
#define BORROW_H

class Borrow {
public:
	Borrow(Date date, Book book, Reader reader);
	Date date() const;
	Book book() const;
	Reader reader() const;

private:
	Date _date;
	Book _book;
	Reader _reader;
};	


#endif //BORROW_H