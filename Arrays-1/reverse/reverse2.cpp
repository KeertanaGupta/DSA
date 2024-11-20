#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,5,7,1,4};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}