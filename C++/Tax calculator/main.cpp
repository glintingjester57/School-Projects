#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // define variables
    double income = -1;
    double tax;
    char married;
    char runp;
    bool run = true;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    // run as long as user wants
    while (run == true) {

        while (income < 0) {
            // Output intro and get values for income and married
            cout << "Please enter in your taxable income." << endl;
            cout << "(This must be a positive value):" << endl;
            cin >> income;
        }

        cout << "Please enter m if married and filing joint return," << endl << "or s if filing a single return:" << endl;
        cin >> married;

        // print output and calculate the tax
        cout << "Your taxable income is $" << income << endl;

        if (married == 'm') {
            cout << "and you are filing a joint return." << endl;

            if ( income >= 0 && income <= 1726) {
                tax = (income) * 0.023;
            }
            else if ( income >= 1727 && income <= 5176) {
                tax = (income - 1726) * 0.33 + 40.0;
            }
            else if ( income >= 5177 && income <= 8626) {
                tax = (income - 5176) * 0.52 + 175.0;
            }
            else {
                tax = (income - 8626) * .075 + 390;
            }
        }
        else {
            cout << "and you are filing a single return." << endl;

            if ( income >= 0 && income <= 863) {
                tax = (income) * 0.023;
            }
            else if ( income >= 864 && income <= 2588) {
                tax = (income - 863) * 0.33 + 25.0;
            }
            else if ( income >= 2589 && income <= 4313) {
                tax = (income - 2588) * 0.52 + 85.0;
            }
            else {
                tax = (income -4313) * .075 + 181;
            }
        }

        cout << "Your income tax will be $" << tax << endl << endl;

        // Check to see if  they would like to run again
        cout << "Would you like to do another calculation (y or n)?" << endl;
        cin >> runp;

        if (runp == 'n') {
            run = false;
        }

    }

}