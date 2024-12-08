#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }

    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int num;

    // Ask the user for a number
    cout << "Enter a number: ";
    cin >> num;

    // Ensure the number is non-negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate and print the factorial
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}
