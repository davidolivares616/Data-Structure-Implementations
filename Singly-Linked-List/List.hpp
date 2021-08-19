//
//  List.hpp
//  Singly-Linked-List
//
//  Created by David Olivares on 7/29/21.
//

#ifndef List_hpp
#define List_hpp

#include "ListNode.hpp"
#include <stdio.h>

class List {
    public:
        List();
        List(int data);
        ~List();
        bool empty();
        int back();
        int front();
        int max();
        int min();
        int pop();
        int popFront();
        int remove(int index);
        int size();
        int valueAt(int index);
        void display();
        void displayLinks();
        void erase(int value);
        void insert(int data, int index);
        void push(int data);
        void pushFront(int data);
        void reverse();
    private:
        ListNode *head;
        int nodeCount;
};

#endif /* List_hpp */
