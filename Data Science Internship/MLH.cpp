#include <iostream>
#include <stack>

int main() {
    // Create an empty stack
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    // Get the size of the stack
    std::cout << "Size of the stack: " << myStack.size() << std::endl;

    // Check if the stack is empty
    std::cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << std::endl;

    // Access the top element of the stack
    std::cout << "Top element of the stack: " << myStack.top() << std::endl;

    // Pop elements from the stack
    while (!myStack.empty()) {
        std::cout << "Popping element: " << myStack.top() << std::endl;
        myStack.pop();
    }

    return 0;
}




/*

In this code snippet, we use the std::stack container from the C++ Standard Library to implement a stack. Here's a brief overview of the operations:

push(element): Pushes an element onto the top of the stack.
pop(): Removes the top element from the stack.
top(): Returns a reference to the top element of the stack.
size(): Returns the number of elements in the stack.
empty(): Checks if the stack is empty.
The code demonstrates how to create a stack, push elements onto it, access the top element, and pop elements from the stack until it becomes empty.

*/
