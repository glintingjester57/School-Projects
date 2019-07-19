//
// Created by easto on 11/9/2018.
//

#include "dynarray.h"
#include <iostream>
#include <string>

// function to return capacity
int DynArray::capacity() {
    return cap;
}

// function to return size
int DynArray::size() {
    return sz;
}

// Push back function
void DynArray::push_back(int n) {

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
int DynArray::at(int n) {
    if (n < sz) {
        return array[n];
    }
    else {
        throw std::runtime_error("invalid index");
    }
}

// popback function
void DynArray::pop_back() {

    sz = sz - 1;

}

// clear function
void DynArray::clear() {

    cap = 2;
    sz = 0;
    array[cap] = 0;

}