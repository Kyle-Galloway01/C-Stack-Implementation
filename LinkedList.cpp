#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
    int top;
public:
    int arr[MAX_SIZE];
    Stack() { top = -1; }
    bool push(int x) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow\n";
            return false;
        }
        else {
            arr[++top] = x;
            cout << x << " pushed into the stack\n";
            return true;
        }
    }
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return 0;
        }
        else {
            int x = arr[top--];
            return x;
        }
    }
    bool isEmpty() {
        return (top < 0);
    }
};

// Example usage:
int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << " popped from stack\n";

    return 0;
}
