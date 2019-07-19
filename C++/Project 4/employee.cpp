//
// Created by easto on 10/11/2018.
//
#include "iostream"
#include "iomanip"
#include <string>
#include "employee.h"
#include <fstream>
#include <stdexcept>
using namespace std;


void HourlyEmployee::setNumber(int newNumber) {

    employeeNumber = newNumber;

}

void HourlyEmployee::setName(string newName) {

    name = newName;

}

void HourlyEmployee::setAddress(string newAddress) {

    address = newAddress;

}

void HourlyEmployee::setPhone(string newPhone) {

    phone = newPhone;

}

void HourlyEmployee::setWage(double newWage) {

    hourlyWage = newWage;

}

void HourlyEmployee::setHours(double newHours) {

    hoursWorked = newHours;

}

void HourlyEmployee::calcPay() {

    double hoursNew;
    double grossPay;
    double overtime;

    if (hoursWorked > 40) {

        overtime = (hoursWorked - 40) * 1.5;
        hoursNew = 40 + overtime;

        grossPay = hourlyWage * hoursNew;
    }
    else {

        grossPay = hourlyWage * hoursWorked;

    }

    netPay = grossPay * .725;

}

void HourlyEmployee::printCheck() {

    // cout << "Employee Name: " << name << endl;
    // cout << "Employee Number: " << employeeNumber << endl;
    // cout << "Address: " << address << endl;
    // cout << "Phone: " << phone << endl << endl << endl;
    cout << endl << "....................UVU Computer Science Dept................................." << endl << endl << endl;
    cout << fixed << "Pay to the order of " << name << "....................................$" << setprecision(2) << netPay << endl << endl << endl;
    cout << "United Community Credit Union" << endl;
    cout << ".............................................................................." << endl << endl;
    cout << endl << endl << endl << endl << endl << "Hours worked: " << hoursWorked << endl;
    cout << "Hourly Wage: " << hourlyWage;

}

void HourlyEmployee::setAll(int newNumber, string newName, string newAddress, string newPhone, double newWage, double newHours) {

    employeeNumber = newNumber;
    name = newName;
    address = newAddress;
    phone = newPhone;
    hourlyWage = newHours;
    hoursWorked = newWage;

}

void HourlyEmployee::write(string fileName){

    // open file
    ofstream file;
    file.open(fileName, ios::app);

    // write the data
    file << employeeNumber << "\r\n";
    file << name << "\r\n";
    file << address << "\r\n";
    file << phone << "\r\n";
    file << hoursWorked << "\r\n";
    file << hourlyWage << "\r\n";

    file.close();

}

void HourlyEmployee::read(string fileName, int user) {

 // comment


}

void SalariedEmployee::setAll(int newNumber, string newName, string newAddress, string newPhone, double newSalary) {

    employeeNumber = newNumber;
    name = newName;
    address = newAddress;
    phone = newPhone;
    salary = newSalary;

}

void SalariedEmployee::calcPay(){

    netPay = salary * .6726;

}

void SalariedEmployee::printCheck(){

    cout << endl << "....................UVU Computer Science Dept................................." << endl << endl << endl;
    cout << fixed << "Pay to the order of " << name << "....................................$" << setprecision(2) << netPay << endl << endl << endl;
    cout << "United Community Credit Union" << endl;
    cout << ".............................................................................." << endl << endl;
    cout << endl << endl << endl << endl << endl << "Salary: " << salary;

}
