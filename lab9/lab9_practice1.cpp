//*A C++ program to add, subtract, multiply and divide two integers using the following types of user-defined functions -
//• No Argument Passed and No return value
//• No Argument Passed but return a value
//• Argument Passed but no return value
//• Argument passed and returns a value
#include <iostream>
using namespace std;
// Function to add two integers (No Argument Passed and No return value)
void add() {
    int num1, num2, sum = 0;
    cout << "Enter two integers to add: "<<endl;
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "Sum: " << sum <<endl;
}

// Function to subtract two integers (No Argument Passed but return a value)
int subtract() {
    int num1, num2,result = 0;
    cout << "Enter two integers to subtract: "<<endl;
    cin >> num1 >> num2;
    result = num1 - num2;
    return result;
}

// Function to multiply two integers (Argument Passed but no return value)
void multiply(int num1, int num2) {
    int product = num1 * num2;
    cout << "Product: " << product <<endl;
}

// Function to divide two integers (Argument passed and returns a value)
double divide(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." <<endl;
        return 0;
    }
    double output = static_cast<double>(num1) / num2;
    return output;
}

int main() {
    add();

    int result = subtract();
    cout << "Difference: " << result <<endl;

    int num1, num2;
    cout << "Enter two integers to multiply: "<<endl;
    cin >> num1 >> num2;
    multiply(num1, num2);

    cout << "Enter two integers to divide: "<<endl;
    cin >> num1 >> num2;
    double output = divide(num1, num2);
    cout << "Output: " << output <<endl;

    return 0;
}
