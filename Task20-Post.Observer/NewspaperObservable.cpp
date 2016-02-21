#include "NewspaperObservable.h"

NewspaperObservable::NewspaperObservable() :
	Observable()
{
}

NewspaperObservable::NewspaperObservable(std::string title) :
	Observable(title)
{
}



void NewspaperObservable::notify(Newspaper newspaper)
{
	for (auto subscriber : _subscribers)
	{
		subscriber.recievePublication(newspaper);
	}
}
