#include<iostream>
#include<algorithm> // For sort
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr + n);

    // h-th max element
    int maxElement = arr[n - h];
    // h-th min element
    int minElement = arr[h - 1];

    cout << h << "th max element: " << maxElement << endl;
    cout << h << "th min element: " << minElement << endl;

    return 0;
}
