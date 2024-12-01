#include<iostream>
using namespace std;
void Reverse(int arr[],int start, int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void RotateToRight(int arr[], int n, int k){
    // Reverse first n-k elements
  Reverse(arr, 0, n - k - 1);
  // Reverse last k elements
  Reverse(arr, n - k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}
void RotateToLeft(int arr[], int n, int k){
  // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}
int main(){
    int n;
    cout<<"Enter no of array elements: ";
    cin>>n;
    int k;
    cout<<"Enter k(Rotate array by k elements): ";
    cin>>k;

    int arr[n];
    cout<<"Enter Array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ch;
    cout<<"Enter 1-->Right"<<endl<<"      2-->Left"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
            RotateToRight(arr, n, k);
            break;
    case 2: 
            RotateToLeft(arr, n, k);
            break;
    default:
            cout<<"Invalid Choice"<<endl;
            break;
    }
    cout << "Array after "<<k<<" rotations: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}