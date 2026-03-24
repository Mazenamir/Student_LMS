#pragma once

#include <iostream>
using namespace std; 

class person
{
protected : 
	string name; 

public : 
	person(string n);
	string get_name();
};

