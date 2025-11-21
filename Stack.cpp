#include <iostream>
using namespace std;

int main() {
    int stack[100], top = -1, choice, val;

    while (true) {
        cout << "\n1. push\n2. pop\n3. display\n4. exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value to push: ";
            cin >> val;
            stack[++top] = val;
        }
        else if (choice == 2) {
            if (top == -1)
                cout << "Stack underflow\n";
            else
                cout << "Popped: " << stack[top--] << endl;
        }
        else if (choice == 3) {
            if (top == -1)
                cout << "Stack is empty\n";
            else {
                for (int i = top; i >= 0; i--)
                    cout << stack[i] << " ";
                cout << endl;
            }
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
