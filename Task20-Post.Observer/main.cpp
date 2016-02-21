#include "PostOffice.h"
#include "PublishingHouse.h"
#include "Subscriber.h"


int main()
{
	PublishingHouse pH;
	PostOffice post;
	Subscriber vasya("Vasya", "Pupkin");
	Subscriber petya("Petya", "Ivanov");

	post.addMagazineSubscription(vasya, "Pochemuchka");
	post.addNewspaperSubscription(petya, "Vesty");
	post.addNewspaperSubscription(vasya, "Vesty");

	pH.publishNewsPaper(post, "Vesty");
	pH.publishMagazine(post, "Pochemuchka");

	system("pause");
	return 0;
}