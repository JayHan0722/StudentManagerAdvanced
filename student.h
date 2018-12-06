#include <string>
#include <vector>
#ifndef _STUDENT_H_
#define _STUDENT_H_

class student
{
        private:
                std::string First, Last = "";
                std::vector <double> Grade;
        public:
                void setName(std::string firstname, std::string lastname);
                std::string fullName();
                void addGrade(double grade);
                double getScore();
                student();
};


#endif
