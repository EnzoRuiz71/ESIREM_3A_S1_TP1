#include "date.h"
#include <string>
#include <vector>


class Book{
public:
	Book(std::string title, std::string writer, std::string language, std::string type, Date date, std::string ISBN);
	std::string title() const;
	std::string writer() const;
	std::string language() const;
	std::string type() const;
	std::string ISBN() const;
	Date date();



private:
	std::string _title;
	std::string _writer;
	std::string _language;
	std::string _type;
	Date _date;
	std::string _ISBN;
};