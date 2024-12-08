#include <iostream>
using namespace std;

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: Fibonacci of 0 is 0, Fibonacci of 1 is 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    // Recursive case: Fibonacci of n is the sum of Fibonacci of (n-1) and (n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;

    // Ask the user for the number of terms
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> terms;

    // Print the Fibonacci series
    cout << "Fibonacci series: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
