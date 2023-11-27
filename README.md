# C++ Stack Implementation

This repository contains a basic implementation of a stack data structure in C++ using an array.

### Stack Implementation Details

The `Stack` class includes the following methods:
- `push(int x)`: Adds an element `x` to the stack.
- `pop()`: Removes and returns the top element from the stack.
- `isEmpty()`: Checks if the stack is empty.

### Usage

To use the `Stack` class in your C++ code, follow these steps:
1. Clone or download this repository.
2. Include the `Stack.h` file in your C++ code.
3. Create a `Stack` object and use its methods (`push`, `pop`, `isEmpty`) as required.

### Example Usage

Here's a simple example of how to use the `Stack` class:

```cpp
#include <iostream>
#include "Stack.h"

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << stack.pop() << " popped from stack\n";

    return 0;
}
