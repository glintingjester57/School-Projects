#include <iostream>
#include <string>
#include "employee.h"
#include <fstream>
using namespace std;


int main() {

    HourlyEmployee HP;
    HourlyEmployee RW;
    SalariedEmployee AD;
    SalariedEmployee RH;

    int choice;
    string fileName;

    HP.setAll(1, "H. Potter", "Privet Drive", "201-9090", 40, 12.00);
    RW.setAll(3, "R. Weasley", "The Burrow", "892-2000", 40, 10.00);
    AD.setAll(2, "A. Dumbledore", "Hogwarts", "803-1230", 1200);
    RH.setAll(4, "R. Hagrid", "Hogwarts", "910-8765", 1000);

    HP.calcPay();
    RW.calcPay();
    AD.calcPay();
    RH.calcPay();

    // Ask for input and select an option
    cout << "This program has two options:" << endl;
    cout << "1 - Create a data file, or" << endl;
    cout << "2 - Read data from a file and print paychecks." << endl;
    cout << "Please enter (1) to create a file or (2) to print checks:";
    cin >> choice;
    cout << endl;

    try {

        // Ask for a file name
        cout << "Please enter a file name: ";
        cin >> fileName;

        if (choice == 1) {

            // Write users information to file
            // create the file
            HP.write(fileName);
            AD.write(fileName);
            RW.write(fileName);
            RH.write(fileName);

            // tell the user they are ready
            cout << endl << "Data file created ... you can now run option 2." << endl << endl << endl;

        } else if (choice == 2) {

            // Open file to read
            HP.read(fileName, 1);
            AD.read(fileName, 2);
            RW.read(fileName, 3);
            RH.read(fileName, 4);

            HP.printCheck();
            AD.printCheck();
            RW.printCheck();
            RH.printCheck();

        }
    }
    catch (runtime_error &excpt) {

        cout << excpt.what();

    }

}