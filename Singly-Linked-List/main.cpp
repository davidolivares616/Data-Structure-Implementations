//
//  main.cpp
//  Singly-Linked-List
//
//  Created by David Olivares on 7/29/21.
//

#include "List.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {

    List list1= List();
    List list2 = List(1);

    for (int i = 1; i < 10; i++) {
        list1.push(i*1);
        list2.push(i*2);
    }

    std::cout << "L1 Empty: " << list1.empty() << std::endl;
    std::cout << "L1 Back: " << list1.back() << std::endl;
    std::cout << "L1 Front: " << list1.front() << std::endl;
    std::cout << "L1 Min: " << list1.min() << std::endl;
    std::cout << "L1 Max: " << list1.max() << std::endl;
    std::cout << "L1 Size: " << list1.size() << std::endl;
    std::cout << "L1: ";
    list1.displayLinks();

    std::cout << "L2 Empty: " << list2.empty() << std::endl;
    std::cout << "L2 Back: " << list2.back() << std::endl;
    std::cout << "L2 Front: " << list2.front() << std::endl;
    std::cout << "L2 Min: " << list2.min() << std::endl;
    std::cout << "L2 Max: " << list2.max() << std::endl;
    std::cout << "L2 Size: " << list2.size() << std::endl;
    std::cout << "L2: ";
    list2.displayLinks();
    std::cout << std::endl;

    list1.pop();
    list2.pop();
    std::cout << "L1 Empty: " << list1.empty() << std::endl;
    std::cout << "L1 Back: " << list1.back() << std::endl;
    std::cout << "L1 Front: " << list1.front() << std::endl;
    std::cout << "L1 Min: " << list1.min() << std::endl;
    std::cout << "L1 Max: " << list1.max() << std::endl;
    std::cout << "L1 Size: " << list1.size() << std::endl;
    std::cout << "L1: ";
    list1.displayLinks();

    std::cout << "L2 Empty: " << list2.empty() << std::endl;
    std::cout << "L2 Back: " << list2.back() << std::endl;
    std::cout << "L2 Front: " << list2.front() << std::endl;
    std::cout << "L2 Min: " << list2.min() << std::endl;
    std::cout << "L2 Max: " << list2.max() << std::endl;
    std::cout << "L2 Size: " << list2.size() << std::endl;
    std::cout << "L2: ";
    list2.displayLinks();
    std::cout << std::endl;

    list1.popFront();
    list2.popFront();
    std::cout << "L1 Empty: " << list1.empty() << std::endl;
    std::cout << "L1 Back: " << list1.back() << std::endl;
    std::cout << "L1 Front: " << list1.front() << std::endl;
    std::cout << "L1 Min: " << list1.min() << std::endl;
    std::cout << "L1 Max: " << list1.max() << std::endl;
    std::cout << "L1 Size: " << list1.size() << std::endl;
    std::cout << "L1: ";
    list1.displayLinks();

    std::cout << "L2 Empty: " << list2.empty() << std::endl;
    std::cout << "L2 Back: " << list2.back() << std::endl;
    std::cout << "L2 Front: " << list2.front() << std::endl;
    std::cout << "L2 Min: " << list2.min() << std::endl;
    std::cout << "L2 Max: " << list2.max() << std::endl;
    std::cout << "L2 Size: " << list2.size() << std::endl;
    std::cout << "L2: ";
    list2.displayLinks();
    std::cout << std::endl;

    list1.remove(3);
    list2.remove(4);
    std::cout << "L1 Empty: " << list1.empty() << std::endl;
    std::cout << "L1 Back: " << list1.back() << std::endl;
    std::cout << "L1 Front: " << list1.front() << std::endl;
    std::cout << "L1 Min: " << list1.min() << std::endl;
    std::cout << "L1 Max: " << list1.max() << std::endl;
    std::cout << "L1 Size: " << list1.size() << std::endl;
    std::cout << "L1: ";
    list1.displayLinks();

    std::cout << "L2 Empty: " << list2.empty() << std::endl;
    std::cout << "L2 Back: " << list2.back() << std::endl;
    std::cout << "L2 Front: " << list2.front() << std::endl;
    std::cout << "L2 Min: " << list2.min() << std::endl;
    std::cout << "L2 Max: " << list2.max() << std::endl;
    std::cout << "L2 Size: " << list2.size() << std::endl;
    std::cout << "L2: ";
    list2.displayLinks();
    std::cout << std::endl;

    list1.erase(6);
    list2.erase(6);
    std::cout << "L1 Empty: " << list1.empty() << std::endl;
    std::cout << "L1 Back: " << list1.back() << std::endl;
    std::cout << "L1 Front: " << list1.front() << std::endl;
    std::cout << "L1 Min: " << list1.min() << std::endl;
    std::cout << "L1 Max: " << list1.max() << std::endl;
    std::cout << "L1 Size: " << list1.size() << std::endl;
    std::cout << "L1: ";
    list1.displayLinks();

    std::cout << "L2 Empty: " << list2.empty() << std::endl;
    std::cout << "L2 Back: " << list2.back() << std::endl;
    std::cout << "L2 Front: " << list2.front() << std::endl;
    std::cout << "L2 Min: " << list2.min() << std::endl;
    std::cout << "L2 Max: " << list2.max() << std::endl;
    std::cout << "L2 Size: " << list2.size() << std::endl;
    std::cout << "L2: ";
    list2.displayLinks();
    std::cout << std::endl;

    list1.insert(0, 3);
    list2.insert(0, 4);
    std::cout << "L1 Empty: " << list1.empty() << std::endl;
    std::cout << "L1 Back: " << list1.back() << std::endl;
    std::cout << "L1 Front: " << list1.front() << std::endl;
    std::cout << "L1 Min: " << list1.min() << std::endl;
    std::cout << "L1 Max: " << list1.max() << std::endl;
    std::cout << "L1 Size: " << list1.size() << std::endl;
    std::cout << "L1: ";
    list1.displayLinks();

    std::cout << "L2 Empty: " << list2.empty() << std::endl;
    std::cout << "L2 Back: " << list2.back() << std::endl;
    std::cout << "L2 Front: " << list2.front() << std::endl;
    std::cout << "L2 Min: " << list2.min() << std::endl;
    std::cout << "L2 Max: " << list2.max() << std::endl;
    std::cout << "L2 Size: " << list2.size() << std::endl;
    std::cout << "L2: ";
    list2.displayLinks();
    std::cout << std::endl;

    list1.pushFront(10);
    list2.pushFront(10);
    std::cout << "L1 Empty: " << list1.empty() << std::endl;
    std::cout << "L1 Back: " << list1.back() << std::endl;
    std::cout << "L1 Front: " << list1.front() << std::endl;
    std::cout << "L1 Min: " << list1.min() << std::endl;
    std::cout << "L1 Max: " << list1.max() << std::endl;
    std::cout << "L1 Size: " << list1.size() << std::endl;
    std::cout << "L1: ";
    list1.displayLinks();

    std::cout << "L2 Empty: " << list2.empty() << std::endl;
    std::cout << "L2 Back: " << list2.back() << std::endl;
    std::cout << "L2 Front: " << list2.front() << std::endl;
    std::cout << "L2 Min: " << list2.min() << std::endl;
    std::cout << "L2 Max: " << list2.max() << std::endl;
    std::cout << "L2 Size: " << list2.size() << std::endl;
    std::cout << "L2: ";
    list2.displayLinks();
    std::cout << std::endl;

    list1.reverse();
    list2.reverse();
    std::cout << "L1 Empty: " << list1.empty() << std::endl;
    std::cout << "L1 Back: " << list1.back() << std::endl;
    std::cout << "L1 Front: " << list1.front() << std::endl;
    std::cout << "L1 Min: " << list1.min() << std::endl;
    std::cout << "L1 Max: " << list1.max() << std::endl;
    std::cout << "L1 Size: " << list1.size() << std::endl;
    std::cout << "L1: ";
    list1.displayLinks();

    std::cout << "L2 Empty: " << list2.empty() << std::endl;
    std::cout << "L2 Back: " << list2.back() << std::endl;
    std::cout << "L2 Front: " << list2.front() << std::endl;
    std::cout << "L2 Min: " << list2.min() << std::endl;
    std::cout << "L2 Max: " << list2.max() << std::endl;
    std::cout << "L2 Size: " << list2.size() << std::endl;
    std::cout << "L2: ";
    list2.displayLinks();
    std::cout << std::endl;

    return 0;
}
