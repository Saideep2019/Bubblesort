#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input: Number of elements in the array
    cin >> n;

    int arr[n];

    // Input: Elements of the array separated by space
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array using Bubble Sort
    bubbleSort(arr, n);

    // Output: Sorted array with elements separated by space
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << " ";  // Add a space between elements
        }
    }
    cout << endl;

    return 0;
}
