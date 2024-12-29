#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function to find the number of digits in the largest number
int max_digit_count(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int count = 0;
    while (max != 0) {
        max /= 10;
        count++;
    }
    return count;
}

// Function to pad numbers with leading zeros
void pad_numbers(int arr[], string padded_array[], int n, int max_digits) {
    for (int i = 0; i < n; i++) {
        string num_str = to_string(arr[i]);
        while (num_str.length() < max_digits) {
            num_str = "0" + num_str; // Add leading zeros
        }
        padded_array[i] = num_str;
    }
}

// Radix Sort function
void radix_sort(string padded_array[], int n, int max_digits) {
    for (int digit = max_digits - 1; digit >= 0; digit--) { // Iterate over each digit
        string output[n];
        int count[10] = {0};

        // Count occurrences of each digit
        for (int i = 0; i < n; i++) {
            int d = padded_array[i][digit] - '0';
            count[d]++; 
        }

        // Update count to contain position info
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        // Build the sorted output array
        for (int i = n - 1; i >= 0; i--) {
            int d = padded_array[i][digit] - '0';
            output[count[d] - 1] = padded_array[i];
            count[d]--;
        }

        // Copy the sorted output back to padded_array
        for (int i = 0; i < n; i++) {
            padded_array[i] = output[i];
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    string padded_array[n]; // Array to store padded numbers as strings

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the maximum number of digits
    int max_digits = max_digit_count(arr, n);

    // Pad numbers with leading zeros
    pad_numbers(arr, padded_array, n, max_digits);

    // Apply Radix Sort
    radix_sort(padded_array, n, max_digits);

    // Convert strings back to integers (if needed) and print sorted numbers
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << stoi(padded_array[i]) << " ";
    }
    cout << endl;

    return 0;
}