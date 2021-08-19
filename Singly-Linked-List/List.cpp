//
//  List.cpp
//  Singly-Linked-List
//
//  Created by David Olivares on 7/29/21.
//

#include "List.hpp"
#include <iostream>

List::List() {
    head = nullptr;
    nodeCount = 0;
}

List::List(int data) {
    head = new ListNode(data);
    nodeCount = 1;
}

List::~List() {
    if (!empty()) {
        ListNode *temp = head;
        while (temp != nullptr) {
            ListNode *toBeDeleted = temp;
            temp = temp->next;
            delete toBeDeleted;
        }
    }
}

bool List::empty() {
    return head == nullptr;
}

// O(n) time
// Coud improve to O(1) time if tail ptr used
int List::back() {
    if (head) {
        ListNode* curr = head;
        while (curr->next) {
            curr = curr->next;
        }
        return curr->data;
    }
    return INT_MIN;
}

int List::front() {
    if (head) {
        return head->data;
    }
    return INT_MIN;
}

int List::max() {
    int m = INT_MIN;
    ListNode* curr = head;
    while (curr) {
        if (curr->data > m) {
            m = curr->data;
        }
        curr = curr->next;
    }
    return m;
}

int List::min() {
    int m = INT_MAX;
    ListNode* curr = head;
    while (curr) {
        if (curr->data < m) {
            m = curr->data;
        }
        curr = curr->next;
    }
    return m;
}

int List::pop() {
    int x = INT_MIN;
    if (!empty()) {
        ListNode* curr = head;
        while (curr->next->next) {
            curr = curr->next;
        }
        x = curr->next->data;
        ListNode* toBeDeleted = curr->next;
        curr->next = nullptr;
        delete toBeDeleted;
        nodeCount--;
    }
    return x;
}

int List::popFront() {
    int x = INT_MIN;
    if (!empty()) {
        ListNode* toBeDeleted = head;
        x = head->data;
        head = head->next;
        delete toBeDeleted;
        nodeCount--;
    }
    return x;
}

int List::remove(int index) {
    int x = INT_MIN;
    if (!head) {
        return x;
    }
    ListNode* temp = head;
    if (index == 0) {
        x  = head->data;
        head = temp->next;
        free(temp);
        return x;
    }
    for (int i = 1; temp != NULL && i < index; i++) {
        temp = temp->next;
    }
    ListNode* next = temp->next->next;
    free(temp->next);
    temp->next = next;
    nodeCount--;
    return x;
}

int List::size() {
    return nodeCount;
}

int List::valueAt(int index) {
    if (index < 0 || index > nodeCount-1) {
        std::cout << "[ERROR]: Index out of range"<< std::endl;
        exit(1);
    }
    if (!empty()) {
        ListNode* curr = head;
        while (index > 0) {
            curr = curr->next;
            index--;
        }
        return curr->data;
    }
    return INT_MIN;
}

void List::display() {
    ListNode* curr = head;
    while (curr) {
        if (curr->next != nullptr) {
            std::cout << curr->data << " ";
        } else {
            std::cout << curr->data << std::endl;
        }
        curr = curr->next;
    }
}

void List::displayLinks() {
    ListNode* curr = head;
    while (curr) {
        if (curr->next != nullptr) {
            std::cout << "(" << curr->data << ")->";
        } else {
            std::cout << "(" << curr->data << ")-x" << std::endl;
        }
        curr = curr->next;
    }
}

void List::erase(int value) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    // head node itself holds value
    if (head && head->data == value) {
        head = curr->next;
        delete curr;
        return;
    }
    while (curr && curr->data != value) {
        prev = curr;
        curr = curr->next;
    }
    // value not present
    if (curr == nullptr) {
        return;
    }
    prev->next = curr->next;
    delete curr;
    nodeCount--;
}

void List::insert(int data, int index) {
    if (index < 0 || index > nodeCount-1) {
        std::cout << "[ERROR]: Index out of range"<< std::endl;
        exit(1);
    }
    ListNode* n = new ListNode(data);
    ListNode* curr = head;
    while (index > 1) {
        curr = curr->next;
        index--;
    }
    n->next = curr->next;
    curr->next = n;
    nodeCount++;
}

void List::push(int data) {
    ListNode* newNode = new ListNode(data);
    if (empty()) {
        head = newNode;
    } else {
        ListNode* current;
        current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    nodeCount++;
}

void List::pushFront(int data) {
    ListNode *newNode = new ListNode(data);
    if (empty()) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    nodeCount++;
}

void List::reverse() {
    ListNode* curr = head;
    ListNode* prev = nullptr;
    while (curr) {
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
}
