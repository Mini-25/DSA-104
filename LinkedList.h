#ifndef LINKEDLIST_H
//#define LINKEDLIST_H

#include <iostream>
#include "ADT.h"

using namespace std;

class LinkedList : public ADT {
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    void insert(int val) override {
        Node* newNode = new Node;
        newNode->val = val;
        newNode->next = head;
        head = newNode;
    }

    void remove() override {
    if (!head) {
        cout << "Error: List is empty, cannot remove." << endl;
        return;
    }

    if (!head->next) {
        // Only one node in the list
        delete head;
        head = nullptr;
    } else {
        // More than one node in the list
        Node* temp = head;
        while (temp->next->next) {
            temp = temp->next;
        }
        // Now temp is the second-to-last node
        delete temp->next;
        temp->next = nullptr;
    }
}

    void print() const override {
        Node* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAfter(Node* node, int val) {
        if (node == nullptr) {
            cout << "Given previous node cannot be NULL" << endl;
            return;
        }
        Node* newNode = new Node;
        newNode->val = val;
        newNode->next = node->next;
        node->next = newNode;
    }
};

#endif 
