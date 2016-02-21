#pragma once
#include "Newspaper.h"
#include "Observable.h"
class NewspaperObservable : public Observable
{
public:
	NewspaperObservable();
	NewspaperObservable(std::string title);
	void notify(Newspaper newspaper);
};