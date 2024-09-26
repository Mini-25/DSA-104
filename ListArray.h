#ifndef LISTARRAY_H
//#define LISTARRAY_H

#include <iostream>
#include "ADT.h"

using namespace std;

class ListArray : public ADT {
private:
    int* array;
    int capacity, size;

    void resize() {
        int* newArray = new int[capacity * 2];
        for (int i = 0; i < size; i++) {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
        capacity = capacity * 2;
    }

public:
    ListArray() {
        capacity = 1;
        size = 0;
        array = new int[capacity];
    }

    ~ListArray() {
        delete[] array;
    }

    void insert(int element) override {
        if (size == capacity) {
            resize();
        }
        array[size] = element;
        size++;
    }

    void remove() override {
        if (size > 0) {
            size--;
        } else {
            cout << "Error: List is empty, cannot remove." << endl;
        }
    }

    void print() const override {
        cout << "List: ";
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

#endif 
