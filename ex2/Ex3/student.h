#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    string name;
    int grades[10];
    int gradeCount;
    float average;

    void calculateAverage();   // Function to calculate average of grades.
    void display() const;   // Function to display student information.
};

#endif
