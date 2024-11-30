#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of array elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter D(Rotate array by D elements): ";
    int D;
    cin>>D;
    int k=D;
    cout<<"Enter Array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp[D];
    for(int i=0;i<D;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-D;i++){
        arr[i]=arr[k];
        k++;
    }
    k=0;
    for (int i=n-D;i<n;i++) {
        arr[i]=temp[k];
        k++;
    }
    cout << "Array after "<<D<<" rotations: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}