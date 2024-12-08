#include <iostream>
using namespace std;

// Recursive function to reverse an array
void reverseArray(int arr[], int start, int end) {
    // Base case: if start >= end, return
    if (start >= end) {
        return;
    }
    
    // Swap elements at start and end
    swap(arr[start], arr[end]);
    
    // Recursive call for the next pair of elements
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    
    // Ask the user for the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    
    // Ask the user for the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the reverseArray function
    reverseArray(arr, 0, n - 1);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
