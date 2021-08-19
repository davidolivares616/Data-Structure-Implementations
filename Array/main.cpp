//
//  main.cpp
//  Array
//
//  Created by David Olivares on 7/26/21.
//

#include "Array.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {

    // Object instanciation
    Array a = Array();
    Array b = Array(4);

    std::cout << "////////////////////INIT////////////////////" << std::endl;
    std::cout << "Array A:" << std::endl;
    a.display();
    std::cout << std::endl;
    std::cout << "Array B:" << std::endl;
    b.display();
    std::cout << std::endl;

    // Pushing values, array capacity should grow
    std::cout << "////////////////////PUSH////////////////////" << std::endl;
    for (int i = 0; i < 10; i++) {
        a.push(i);
        b.push(i*2);
        
        std::cout << "Array A:" << std::endl;
        a.display();
        std::cout << std::endl;
        std::cout << "Array B:" << std::endl;
        b.display();
        std::cout << std::endl;
    }

    // Popping values, array capacity should shrink
    std::cout << "//////////////////////POP//////////////////////" << std::endl;
    for (int i = 0; i < 6; i++) {
        a.pop();
        b.pop();
        std::cout << "Array A:" << std::endl;
        a.display();
        std::cout << std::endl;
        std::cout << "Array B:" << std::endl;
        b.display();
        std::cout << std::endl;
    }

    return 0;
}
