#include <iostream>
#include <string>

class Reader {
public:
	Reader(std::string user_id, std::string first_name, std::string last_name, std::string borrowed_ISBN);
	std::string user_id() const;
	std::string first_name() const;
	std::string last_name() const;
	std::string borrowed_ISBN() const;
	void updateUserID(std::string user_id);
	void updateFirstName(std::string first_name);
	void updateLastName(std::string last_name);

private:
	std::string _user_id;
	std::string _first_name;
	std::string _last_name;
	std::string _borrowed_ISBN;



};