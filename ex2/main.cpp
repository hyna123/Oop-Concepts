#include <iostream>
#include <fstream>
#include "Student.h"
using namespace std;

int main() {
    ifstream inFile("students.txt");   // Input file for student scores.
    ofstream outFile("averages.txt");  // Output file for average scores.
    int studentCount;
    inFile >> studentCount;

    Student students[100];   // Array to store student data.

    // Read data for each student and calculate average.
    for (int i = 0; i < studentCount; i++) {
        inFile >> students[i].name >> students[i].midterm1 >> students[i].midterm2 >> students[i].finalExam;
        students[i].calculateAverage();  // Calculate the average.
        outFile << students[i].name << " " << students[i].average << endl;  // Output average to file.
    }

    inFile.close();
    outFile.close();
    return 0;
}
