#pragma once
#include "person.h"
class student : public person
{
private : 
	int ids; 
	double gpa;

public : 
	student(int id, string n, double g);
	int get_id();
	double get_gpa();

};

