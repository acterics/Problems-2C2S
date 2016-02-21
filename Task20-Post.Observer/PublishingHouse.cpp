#include "PublishingHouse.h"

PublishingHouse::PublishingHouse()
{
}

void PublishingHouse::publishMagazine(PostOffice post, std::string title)
{
	post.recievePublication(Magazine(title));
}

void PublishingHouse::publishNewsPaper(PostOffice post, std::string title)
{
	post.recievePublication(Newspaper(title));
}
