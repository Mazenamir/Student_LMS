#include "student.h"

student::student(int id, string n, double g) : person(n)
{
    ids = id;
    gpa = g;
}

int student::get_id()
{
    return ids;
}

double student::get_gpa()
{
    return gpa;
}
