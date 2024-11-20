#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int original = n;

    // Count the number of digits
    int count = 0;
    int temp = n;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    // Calculate Armstrong sum using precomputed powers
    temp = n;
    int power[10]; // Array to store powers of each digit (0-9)

    // Precompute the powers of digits 0-9 to the power 'count'
    for (int i = 0; i < 10; i++) {
        int pow_result = 1;
        for (int j = 0; j < count; j++) {
            pow_result *= i;
        }
        power[i] = pow_result;
    }

    // Calculate the Armstrong sum
    while (temp > 0) {
        int digit = temp % 10;
        sum += power[digit];
        temp /= 10;
    }

    // Check if the number is an Armstrong number
    if (original == sum)
        cout << "Yes, it is an Armstrong number";
    else
        cout << "No, it is not an Armstrong number";

    return 0;
}