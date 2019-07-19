//
// Created by easto on 11/9/2018.
//

#ifndef PROJECT_6_DYNARRAY_H
#define PROJECT_6_DYNARRAY_H

#include <iostream>
#include <string>
using namespace std;

template<class myType>
class DynArray {
public:
    //needed class functions
    int capacity();
    void push_back(myType);
    myType size();
    void clear();
    void pop_back();
    myType& back();
    myType& front();

    // copy function
    DynArray(const DynArray &orig){

        cout << "copy" << endl;

        for(int i = 0; i < 12; i++) {

            array[i] = orig.array[i];

        }

        sz = 12;

    }

    // reference function
    myType& operator[](int n){
        return array[n];
    }

    // assign functions
    DynArray& operator=(const DynArray &orig){

        cout << "assign" << endl;

        for(int i = 0; i < 12; i++) {

            array[i] = orig.array[i];

        }

        sz = 12;

    }

    // default constructor
    DynArray() {

        cap = 2;
        sz = 0;

    }

    // parameterized constructor
    DynArray(int n) {

        cap = n;
        sz = 0;

    }

private:
    int cap; // capacity
    int sz; // size
    myType array[32];

};

/***********************************
 *                                  *
 *          Class Functions         *
 *                                  *
 ************************************/

// function to return capacity
template<class myType>
int DynArray<myType>::capacity() {
    return cap;
}

// function to return size
template<class myType>
myType DynArray<myType>::size() {
    return sz;
}

// Push back function
template<class myType>
void DynArray<myType>::push_back(myType n) {

    // check if the size and capacity are the same
    if(sz == cap){

        cout << "grow" << endl;
        cap = cap * 2;

    }

    // initialize new array
    int newArray[cap];

    // copy old array to new array
    for(int i = 0; i < sz; ++i) {

        newArray[i] = array[i];

    }

    // copy new value to the new array
    newArray[sz] = n;

    // reassign the old array
    array[cap] = 0;

    // add number to size
    sz = sz + 1;

    for(int i = 0; i < sz; ++i) {

        array[i] = newArray[i];

    }

}


// popback function
template<class myType>
void DynArray<myType>::pop_back() {

    sz = sz - 1;

}

// clear function
template<class myType>
void DynArray<myType>::clear() {

    cap = 2;
    sz = 0;
    array[cap] = 0;

}

template<class myType>
myType& DynArray<myType>::front(){

    return array[0];
}

template<class myType>
myType& DynArray<myType>::back(){

    return array[sz - 1];
}


#endif //PROJECT_6_DYNARRAY_H
