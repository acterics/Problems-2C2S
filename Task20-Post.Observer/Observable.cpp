#include "Observable.h"

Observable::Observable()
{
}

Observable::Observable(std::string title) :
	_title(title)
{
}

std::string Observable::title()
{
	return _title;
}

void Observable::addSubscriber(Subscriber s)
{
	_subscribers.push_back(s);
}
