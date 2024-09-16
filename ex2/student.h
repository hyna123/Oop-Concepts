#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

struct Student {
    string name;
    float midterm1, midterm2, finalExam, average;

    void calculateAverage();   // Function to calculate average score.
};

#endif
