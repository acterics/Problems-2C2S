#include "Publication.h"

Publication::Publication() :
	_title("unnamed")
{
}

Publication::Publication(std::string title) :
	_title(title)
{
}

std::string Publication::title()
{
	return _title;
}
