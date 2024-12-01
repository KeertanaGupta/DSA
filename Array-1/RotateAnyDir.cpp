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
    Reverse(arr,0,n-k-1);
    Reverse(arr,n-k,n-1);
    Reverse(arr,0,n-1);
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
    RotateToRight(arr, n, k);
    cout << "Array after "<<k<<" rotations: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}