#include "student.h"
#include <iostream>
#include <string>

using namespace std;

void student::setName(string firstname, string lastname)
{
        First = firstname;
        Last = lastname;
}

string student::fullName()
{
        string name;
        name = First + " " + Last;

        return name;
}

void student::addGrade(double grade)
{
        Grade.push_back(grade);
}

double student::getScore()
{
        double totalGrade = 0;
        for(int i = 0; i < Grade.size(); i++)
        {
                totalGrade = totalGrade + Grade[i];
        }

        totalGrade = totalGrade/(Grade.size());

        return totalGrade;
}

student::student()
{
        First = "";
        Last = "";
}
