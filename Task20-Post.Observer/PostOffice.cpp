#include "PostOffice.h"

PostOffice::PostOffice()
{
}

void PostOffice::addMagazineSubscription(Subscriber s, std::string title)
{
	for (auto iterator = _mObservables.begin(); iterator != _mObservables.end(); iterator++)
	{
		if (title == iterator->title())
		{
			iterator->addSubscriber(s);
			return;
		}
	}
	MagazineObservable mO(title);
	mO.addSubscriber(s);
	_mObservables.push_back(mO);
}

void PostOffice::addNewspaperSubscription(Subscriber s, std::string title)
{
	for (auto iterator = _npObservables.begin(); iterator != _npObservables.end(); iterator++)
	{
		if (title == iterator->title())
		{
			iterator->addSubscriber(s);
			return;
		}
	}
	NewspaperObservable nO(title);
	nO.addSubscriber(s);
	_npObservables.push_back(nO);
}

void PostOffice::recievePublication(Magazine m)
{
	for (auto observables: _mObservables)
	{
		if (observables.title() == m.title())
		{
			observables.notify(m);
			return;
		}
	}
}

void PostOffice::recievePublication(Newspaper n)
{
	for (auto observables : _npObservables)
	{
		if (observables.title() == n.title())
		{
			observables.notify(n);
			return;
		}
	}
}
