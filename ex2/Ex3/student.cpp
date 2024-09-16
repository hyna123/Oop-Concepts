#include "Student.h"
#include <iostream>
using namespace std;

// Function to calculate average of student grades.
void Student::calculateAverage() {
    int sum = 0;
    for (int i = 0; i < gradeCount; i++) {
        sum += grades[i];
    }
    average = sum / (float)gradeCount;
}

// Function to display student's name and average.
void Student::display() const {
    cout << "Name: " << name << ", Average: " << average << endl;
}
