#include "Student.h"

// Function to calculate average score of a student.
void Student::calculateAverage() {
    average = 0.25 * midterm1 + 0.25 * midterm2 + 0.5 * finalExam;
}
