// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5],pos,num;
//     cin>>pos>>num;
//     for(int i=0;i<pos;i++){
//         cin>>arr[i];
//         arr[i+1] = arr[i];
//     }
//     arr[pos] = num;
//     for(int i=0;i<pos;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

int main() {
    int arr[5], pos, num;
    
    cout << "Enter the number of initial elements (up to 4): ";
    int n;
    cin >> n;

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position (0-based) to insert the new element: ";
    cin >> pos;
    
    if (pos < 0 || pos > n || n >= 5) {
        cout << "Invalid position or array is full." << endl;
        return 1;
    }

    cout << "Enter the new number to insert: ";
    cin >> num;

    // Shift elements to the right to make space for the new element
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[pos] = num;
    n++;  // Increase the count of elements in the array

    // Output the array with the new element included
    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
