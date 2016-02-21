#pragma once

#include <string>

class Publication
{
private:
	std::string _title;

public:
	Publication();
	Publication(std::string title);
	std::string title();
};