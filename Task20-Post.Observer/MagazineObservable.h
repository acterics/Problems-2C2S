#pragma once
#include "Observable.h"
#include "Magazine.h"
class MagazineObservable : public Observable
{
public:
	MagazineObservable();
	MagazineObservable(std::string title);
	void notify(Magazine magazine);
};