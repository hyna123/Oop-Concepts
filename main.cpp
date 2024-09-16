#include <iostream>
#include "House.h"
using namespace std;

int main() {
    House available[100];  // Array to store multiple houses.
    int count = 0;
    char choice;

    do {
        available[count].input();
        count++;
        cout << "Enter another house? (Y/N): ";
        cin >> choice;
        cin.ignore();  // Clear newline character after Y/N input.
    } while (choice == 'Y' || choice == 'y');

    // Display all entered house details.
    cout << "Owner\tAddress\t\tBedrooms\tPrice" << endl;
    for (int i = 0; i < count; i++) {
        available[i].display();
    }

    return 0;
}
