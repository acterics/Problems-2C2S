#pragma once
#include <string>
#include <iostream>
#include "Magazine.h"
#include "Newspaper.h"

class Subscriber
{
private:
	std::string _firstName;
	std::string _secondName;


public:
	Subscriber();
	Subscriber(std::string fname, std::string sname);

	void recievePublication(Magazine m);
	void recievePublication(Newspaper n);

};