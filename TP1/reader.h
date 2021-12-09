#include <iostream>
#include <string>
#include "book.h"

#ifndef READER_H
#define READER_H


class Reader {
public:
	Reader(std::string user_id, std::string first_name, std::string last_name, Book book);
	std::string user_id() const;
	std::string first_name() const;
	std::string last_name() const;
	Book book() const;
	void updateUserID(std::string user_id);
	void updateFirstName(std::string first_name);
	void updateLastName(std::string last_name);

private:
	std::string _user_id;
	std::string _first_name;
	std::string _last_name;
	Book _book;



};

#endif // READER_H