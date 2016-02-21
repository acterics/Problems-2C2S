#pragma once
#include "Newspaper.h"
#include "Magazine.h"
#include "PostOffice.h"
class PublishingHouse
{
public:
	PublishingHouse();
	void publishMagazine(PostOffice post, std::string title);
	void publishNewsPaper(PostOffice post, std::string title);
};