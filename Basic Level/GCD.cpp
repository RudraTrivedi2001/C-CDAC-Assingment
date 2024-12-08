#include <iostream>
using namespace std;

// Recursive function to calculate GCD
int gcd(int a, int b) {
    // Base case: when b becomes 0, the GCD is a
    if (b == 0) {
        return a;
    }

    // Recursive case: GCD of a and b is GCD of b and a % b
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Ask the user for two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and print the GCD
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;

    return 0;
}
