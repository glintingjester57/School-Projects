#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream myfile;
    myfile.open("test.txt");

    myfile << "please work?";

    myfile.close();

}