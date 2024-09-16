#include <iostream>
#include <fstream>
#include "Student.h"
using namespace std;

int main() {
    ifstream inFile("students.txt");   // Input file.
    int studentCount, gradeCount;
    inFile >> studentCount >> gradeCount;   // Read number of students and grades per student.

    Student students[100];   // Array to store student objects.

    // Read student data and calculate average.
    for (int i = 0; i < studentCount; i++) {
        inFile >> students[i].name;
        students[i].gradeCount = gradeCount;
        for (int j = 0; j < gradeCount; j++) {
            inFile >> students[i].grades[j];
        }
        students[i].calculateAverage();  // Calculate the average.
    }

    // Display all student data.
    for (int i = 0; i < studentCount; i++) {
        students[i].display();
    }

    inFile.close();
    return 0;
}
