//
//  Array.hpp
//  Array
//
//  Created by David Olivares on 7/26/21.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>

class Array {
    public:
        Array();
        Array(int n);
        ~Array();
        int capacity();
        int length();
        int max();
        int min();
        int pop();
        int remove(int index);
        int search(int x);
        int& operator[] (int index);
        void display();
        void insert(int index, int x);
        void push(int x);
        void shiftLeft();
        void shiftRight();
        void reverse();
    private:
        const int growthFactor = 2;
        int cap;
        int len;
        int *A;
        void grow();
        void shrink();
};

#endif /* Array_hpp */
