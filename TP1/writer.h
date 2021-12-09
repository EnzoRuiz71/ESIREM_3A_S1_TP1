#include <iostream>
#include <string>
#include "date.h"

#ifndef WRITER_H
#define WRITER_H

class Writer {
public:
	Writer(int id, std::string first_name, std::string last_name, Date birth_date);
	
	int id() const;
	std::string first_name() const;
	std::string last_name() const;
	Date birth_date();



private:
	int _id;
	std::string _first_name;
	std::string _last_name;
	Date _birth_date;



};

#endif //WRITER_H