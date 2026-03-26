#include <iostream>
#include <cmath> // For pow() function

using namespace std;

// Function prototypes
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
double power(double x, double y);
double factorial(int x);

int main() {
    
    char op;
    double num1, num2;
for(;;){
    cout << "\nEnter operator (+, -, *, /, ^, !): ";
    cin >> op;

    if (op != '!') {
        cout << "Enter two operands: ";
        cin >> num1 >> num2;
    } else {
        cout << "Enter an integer: ";
        cin >> num1;
    }

    switch(op) {
        case '+':
            cout << "Result: " << add(num1, num2);
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2);
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2);
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << divide(num1, num2);
            else
                cout << "Error! Division by zero!";
            break;
        case '^':
            cout << "Result: " << power(num1, num2);
            break;
        case '!':
            cout << "Result: " << factorial((int)num1);
            break;
        default:
            cout << "Error! Invalid operator";
            break;
    }
}

    return 0;
}

// Function definitions
double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}

double power(double x, double y) {
    return pow(x, y);
}

double factorial(int x) {
    if (x == 0)
        return 1;
    else
        return x * factorial(x - 1);
}
