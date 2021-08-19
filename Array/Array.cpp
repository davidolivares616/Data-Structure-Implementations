//
//  Array.cpp
//  Array
//
//  Created by David Olivares on 7/26/21.
//

#include "Array.hpp"
#include <iostream>

//
// PUBLIC MEMBERS
//

// Array Constructor
Array::Array() {
    cap = 1;
    len = 0;
    A = new int[cap];
}

// Array Overloaded Constructor
Array::Array(int n) {
    cap = n;
    len = 0;
    A = new int[cap];
}

// Desctructor
Array::~Array() {
    delete[] A;
}

// Returns the capacity of the Array
int Array::capacity() {
    return cap;
}

// Returns the the length of the Array
int Array::length() {
    return len;
}

// Return the max value element in the Array
int Array::max() {
    int mx = A[0];
    for (int i = 1; i < len; i++) {
        if (A[i] > mx) {
            mx = A[i];
        }
    }
    return mx;
}

// Return the min value element in the Array
int Array::min() {
    int mn = A[0];
    for (int i = 1; i < len; i++) {
        if (A[i] < mn) {
            mn = A[i];
        }
    }
    return mn;
}

int Array::pop() {
    int temp = A[len-1];
    len--;
    if (len == cap/2) {
        shrink();
    }
    return temp;
}

int Array::remove(int index) {
    if (index < 0 || index >= len) {
        std::cout << "Index out of range"<< std::endl;
        exit(1);
    }
    int target = A[index];
    for (int i = index; i < len-1; i++) {
        A[index] = A[index+1];
    }
    len--;
    return target;
}

// Linear Search for target x in the Array
// TODO: Improve Linear Search:
// 1. Transpositon
// 2. Move to Front/Head
int Array::search(int x) {
    for (int i = 0; i < len; i++) {
        if (A[i] == x) {
            return i;
        }
    }
    return -1;
}

void Array::display() {
    std::cout << "Capacity: " << capacity() << std::endl;
    std::cout << "Length: " << length() << std::endl;
    if (len == 0) {
        std::cout << "[]" << std::endl;
        return;
    }
    std::cout << '[';
    for (int i = 0; i < len; i++) {
        if (i < len-1) {
            std::cout << A[i] << ", ";
        } else {
            std::cout << A[i] << "]" <<std::endl;
        }
    }
}

void Array::insert(int index, int x) {
    if (index < 0 || index > len) {
        std::cout << "Index out of range" << std::endl;
        exit(1);
    }
    if (len+1 > cap) {
        grow();
    }
    for (int i = len; i > index; i--) {
        A[i] = A[i-1];
    }
    A[index] = x;
    len++;
}

void Array::push(int x) {
    if (len+1 > cap) {
        grow();
    }
    A[len] = x;
    len++;
}

void Array::shiftLeft() {
    int temp = A[0];
    for (int i = 0; i < len-1; i++) {
        A[i] = A[i+1];
    }
    A[len-1] = temp;
}

void Array::shiftRight() {
    int temp = A[len-1];
    for (int i = len-1; i > 0; i--) {
        A[i] = A[i-1];
    }
    A[0] = temp;
}

void Array::reverse() {
    for (int i = 0; i < len/2; i++) {
        int temp = A[len-1-i];
        A[len-1-i] = A[i];
        A[i] = temp;
    }
}

int& Array::operator[] (int index) {
    if (index < 0 || index >= len) {
        std::cout << "Index out of range"<< std::endl;
        exit(1);
    }
    return A[index];
}

//
// PRIVATE MEMBERS
//
void Array::grow() {
    cap *= growthFactor;
    int *B = new int[cap];
    std::copy(A, A + len, B);
    delete[] A;
    A = B;
}

void Array::shrink() {
    cap /= growthFactor;
    int *B = new int[cap];
    std::copy(A, A + len, B);
    delete[] A;
    A = B;
}
