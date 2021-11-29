#include <iostream>
#include <string>
#include "reader.h"

Reader::Reader(std::string user_id, std::string first_name, std::string last_name, std::string borrowed_ISBN) : 
				_user_id(user_id), _first_name(first_name), _last_name(last_name), _borrowed_ISBN(borrowed_ISBN) {
}

std::string Reader::user_id() const {
	return _user_id;
}

std::string Reader::first_name() const{
	return _first_name;
}

std::string Reader::last_name() const{
	return _last_name;
}

std::string Reader::borrowed_ISBN() const {
	return _borrowed_ISBN;
}

void Reader::updateUserID(std::string user_id) {
	_user_id = user_id;
}

void Reader::updateFirstName(std::string first_name) {
	_first_name = first_name;
}

void Reader::updateLastName(std::string last_name) {
	_last_name = last_name;
}