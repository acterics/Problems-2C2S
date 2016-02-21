#pragma once
#include "MagazineObservable.h"
#include "NewspaperObservable.h"
class PostOffice
{
private:
	std::list<MagazineObservable> _mObservables;
	std::list<NewspaperObservable> _npObservables;

public:
	PostOffice();
	void addMagazineSubscription(Subscriber s, std::string title);
	void addNewspaperSubscription(Subscriber s, std::string title);

	void recievePublication(Magazine m);
	void recievePublication(Newspaper n);



};