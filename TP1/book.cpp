#include <iostream>
#include <string>
#include "book.h"


Book::Book(std::string title, Writer writer, std::string language, std::string type, Date date, std::string ISBN) :
			_title(title), _writer(writer), _language(language), _type(type), _date(date), _ISBN(ISBN) {
}

std::string Book::title() const
{
	return _title;
	
}
Writer Book::writer() const
{
	return _writer;
	
}

std::string Book::language() const
{
	return _language;
	
}

std::string Book::type() const
{
	return _type;
	
}

Date Book::date() const
{
	return _date;
	
}

std::string Book::ISBN() const
{
	return _ISBN;
	
}