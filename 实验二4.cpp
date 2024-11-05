#include <iostream>
using namespace std;

double calculate(double num1, double num2, char op) {
    switch (op) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 == 0) {
            cout << "wrong" << endl;
            
        }
        return num1 / num2;
    case '%':
        if (num2 == 0) {
            cout << "wrong" << endl;
            
        }
        else
        return static_cast<int>(num1) % static_cast<int>(num2);
        break;
    default:
        cout << "wrong" << endl;
       
    }
}

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;
    
    double result = calculate(num1, num2, op);
    cout << "Result: " << result << endl;
    return 0;
}
