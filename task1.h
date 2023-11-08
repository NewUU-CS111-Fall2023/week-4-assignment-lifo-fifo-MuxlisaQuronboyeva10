//
// Created by Muxlisa on 11/8/2023.
//

#ifndef DSANDAL_HW_4_TASK1_H
#define DSANDAL_HW_4_TASK1_H
#include <iostream>
using namespace std;


class task1 {
    // Define Node structure
    struct Node {
        int data;
        Node *next;
    };

public:
// Define Stack class
    class Stack {
    private:
        Node *top;
    public:
        // Constructor
        Stack() {
            top = nullptr;
        }

        // Check if stack is empty
        bool isEmpty() {
            return top == nullptr;
        }

        // Push an element onto the stack
        void push(int value) {
            Node *temp = new Node();
            if (!temp) {
                cout << "Heap Overflow" << endl;
                exit(1);
            }
            temp->data = value;
            temp->next = top;
            top = temp;
        }

        // Pop an element from the stack
        void pop() {
            if (top == NULL) {
                cout << "Underflow" << endl;
                return;
            }
            Node *temp = top;
            top = top->next;
            temp->next = NULL;
            delete temp;
        }

        // Return the top element of the stack
        int topElement() {
            if (!isEmpty())
                return top->data;
            else
                exit(1);
        }
    };
};
#endif //DSANDAL_HW_4_TASK1_H