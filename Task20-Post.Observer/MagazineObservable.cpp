#include "MagazineObservable.h"

MagazineObservable::MagazineObservable() :
	Observable()
{
}

MagazineObservable::MagazineObservable(std::string title) :
	Observable(title)
{
}




void MagazineObservable::notify(Magazine magazine)
{
	for (auto subscriber : _subscribers)
		subscriber.recievePublication(magazine);
}

