//
//  Node.hpp
//  Singly-Linked-List
//
//  Created by David Olivares on 7/29/21.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

class ListNode {
    public:
        int data;
        ListNode *next;
        ListNode(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

#endif /* Node_hpp */
