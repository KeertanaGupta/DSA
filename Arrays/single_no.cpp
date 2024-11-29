#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    bool isUnique;

    for (int i = 0; i < size; i++) {
        isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}