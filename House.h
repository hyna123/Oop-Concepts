#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
public:
    string owner;
    string address;
    int bedrooms;
    float price;

    void input();   // Function to take input from user.
    void display() const;   // Function to display house details.
};

#endif
