#include <iostream>
#include "task1.h"

int main() {
    // Create an instance of the Stack class
    task1::Stack stack;

    // Use the stack
    stack.push(10);
    cout << "Top element is: " << stack.topElement() << endl;
    stack.pop();
    cout << "Stack is empty: " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
