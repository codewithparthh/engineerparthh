#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter num1 op num2: ";
    cin >> num1 >> op >> num2;

    switch (op) {
        case '+': cout << num1 + num2; break;
        case '-': cout << num1 - num2; break;
        case '*': cout << num1 * num2; break;
        case '/': cout << (num2 != 0 ? num1 / num2 : (cout << "Error: Div by zero", 0.0)); break;
        default: cout << "Invalid op";
    }
    cout << endl;
    return 0;
}