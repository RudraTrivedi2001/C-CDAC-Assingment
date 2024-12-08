#include <iostream>
using namespace std;

// Recursive function to print numbers from 1 to n
void printNumbers(int n) {
    // Base case: if n exceeds 10, stop recursion
    if (n > 10) {
        return;
    }

    // Print the current number
    cout << n << " ";

    // Recursive call to print the next number
    printNumbers(n + 1);
}

int main() {
    // Start the recursion by calling printNumbers(1)
    printNumbers(1);
    return 0;
}
