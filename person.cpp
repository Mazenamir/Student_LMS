#include "person.h"

person::person(string n)
{
	name = n;
}

string person::get_name()
{
	return name;
}
