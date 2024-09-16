#include "House.h"
#include <iostream>
using namespace std;

// Function to input house details.
void House::input() {
    cout << "Enter Owner: ";
    getline(cin, owner);
    cout << "Enter Address: ";
    getline(cin, address);
    cout << "Number of Bedrooms: ";
    cin >> bedrooms;
    cout << "Price: ";
    cin >> price;
    cin.ignore();  // Clear newline character.
}

// Function to display house details.
void House::display() const {
    cout << owner << "\t" << address << "\t" << bedrooms << "\t" << price << endl;
}
