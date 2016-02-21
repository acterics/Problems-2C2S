#pragma once
#include <list>
#include "Subscriber.h"
class Observable
{
private:
	std::string _title;
protected:
	std::list<Subscriber> _subscribers;
public:
	Observable();
	Observable(std::string title);
	std::string title();
	void addSubscriber(Subscriber s);
};