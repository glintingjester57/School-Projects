//
// Created by easto on 11/9/2018.
//

#ifndef PROJECT_6_DYNARRAY_H
#define PROJECT_6_DYNARRAY_H

#include <iostream>
#include <string>

template<class myType>
class DynArray {
public:
    //needed class functions
    int capacity();
    myType push_back(myType);
    myType size();
    myType at(int);
    void clear();
    void pop_back();

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
    int array[32];

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
myType DynArray<myType>::push_back(myType n) {

    // check if the size and capacity are the same
    if(sz == cap){

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

// at function whoo
template<class myType>
myType DynArray<myType>::at(int n) {
    if (n < sz) {
        return array[n];
    }
    else {
        throw std::runtime_error("invalid index");
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


#endif //PROJECT_6_DYNARRAY_H
