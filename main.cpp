#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Answer: " << num1 + num2 << endl;
        break;
        case '-':
            cout << "Answer: " << num1 - num2 << endl;
        break;
        case '*':
            cout << "Answer: " << num1 * num2 << endl;
        break;
        case '/':
            cout << (num2 != 0 ? "Result: " + to_string(num1 / num2) : "Error can't divide by zero") << endl;

        break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
