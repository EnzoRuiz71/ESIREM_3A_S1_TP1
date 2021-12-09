#include <string>
#include <vector>
#include "date.h"
#include "writer.h"

#ifndef BOOK_H
#define BOOK_H

class Book{
public:
	Book(std::string title, Writer writer, std::string language, std::string type, Date date, std::string ISBN);
	std::string title() const;
	Writer writer() const;
	std::string language() const;
	std::string type() const;
	std::string ISBN() const;
	Date date() const;



private:
	std::string _title;
	Writer _writer;
	std::string _language;
	std::string _type;
	Date _date;
	std::string _ISBN;
};

#endif // BOOK_H