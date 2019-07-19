//
// Created by easto on 10/11/2018.
//
#include <string>
using namespace std;


#ifndef PROJECT_4_EMPLOYEE_H
#define PROJECT_4_EMPLOYEE_H

// Parent class
class HourlyEmployee {

public:
    void setAll(int, string, string, string, double, double);
    void setNumber(int);
    void setName(string);
    void setAddress(string);
    void setPhone(string);
    void setWage(double);
    void setHours(double);
    void calcPay();
    void printCheck();
    void write(string);
    void read(string, int);

protected:
    int employeeNumber;
    string name;
    string address;
    string phone;
    double hourlyWage;
    double hoursWorked;
    double netPay;

};

class SalariedEmployee: public HourlyEmployee {

public:
    void setAll(int, string, string, string, double);
    void calcPay();
    void printCheck();

private:
    double salary;

};

#endif //PROJECT_4_EMPLOYEE_H
