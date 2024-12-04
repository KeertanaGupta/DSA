#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of array elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array elements(only 0s and 1s): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;  
    for(int i=0;i<n;i++){
        if(arr[i]){
            count++;
        }
    }
    return 0;
}