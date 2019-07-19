#include <iostream>
using namespace std;

void printArray(int array[], int size) {

    for(int i = 0; i < size; ++i){
        cout << array[i] << endl;
    }

}

void rSort(int nums[], int nelems) {

    for(int i = 0; i < nelems - 1; ++i) {
        for(int j = i+1; j < nelems; ++j) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

bool cheatCheck(int array[], int currNum) {

    for(int i = 0; i < 6; ++i) {

        if (currNum == array[i]) {
            return true;
        }
    }
    return false;
}

bool winCheck(int array[], int pos, int currNum) {

    rSort(array, pos);

    if(array[2] + 1 == currNum && currNum == array[3] - 1) {
        return true;
    }
    return false;
}

void createArray(int array[6], int pos, int num) {

    array[pos] = num;

}

void hilo(int lowVal, int highVal, int i, int arr[]) {
    int midVal;
    char userAnswer;

    midVal = (highVal + lowVal) / 2;

    // win check
    if (winCheck(arr, i, midVal)){
        cout << "Your Number is " << midVal << endl;
    }
    // Check for cheat
    else if (cheatCheck(arr, midVal)){
        cout << "You cheated!" << endl;
    }
    else {
        // Prompt user for input
        cout << "Is it " << midVal << " (l,y,h)? ";
        cin >> userAnswer;
        cout << endl;
    }

    // Recursive case: split into lower OR upper half
    if (userAnswer == 'l') {
        createArray(arr, i, midVal);
        ++i;
        hilo(midVal, highVal, i, arr);
    }
    else if (userAnswer == 'h'){
        createArray(arr, i, midVal);
        ++i;
        hilo(lowVal, midVal, i, arr);
    }
    else if (userAnswer == 'y'){
        cout << "Your Number is " << midVal << endl;
    }
}

int main() {

    int array[0];

    cout << "Think of a number between 1 and 100" << endl;
    cout << "I will try and guess it with your help." << endl << endl;

    hilo(0, 100, 0, array);

    int a[] = {5,4,3,2,1};
    int const size = 5;

    rSort(a, size);

    cout << endl << "Sorted result:\n";

    printArray(a, size);

    cout << endl;
}