#include <iostream>
#include <string>
#include "writer.h"


Writer::Writer(int id, std::string first_name, std::string last_name, Date birth_date) :
			_id(id), _first_name(first_name), _last_name(last_name), _birth_date(birth_date) {
}

int Writer::id() const
{
	return _id;
}

std::string Writer::first_name() const
{
	return _first_name;
}

std::string Writer::last_name() const
{
	return _last_name;
}



Date Writer::birth_date()
{
	return _birth_date;
}	
