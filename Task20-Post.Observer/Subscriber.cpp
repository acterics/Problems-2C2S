#include "Subscriber.h"

Subscriber::Subscriber()
{
}

Subscriber::Subscriber(std::string fname, std::string sname) :
	_firstName(fname), _secondName(sname)
{
}

void Subscriber::recievePublication(Magazine m)
{
	std::cout << _firstName << " glad to recieve magazine " << m.title() << std::endl;
}

void Subscriber::recievePublication(Newspaper n)
{
	std::cout << _firstName << " glad to recieve newspaper " << n.title() << std::endl;
}


