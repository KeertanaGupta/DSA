#include<iostream>
using namespace std;
int linearSearch(int arr[], int size,int x){
    for(int i=0;i<size;i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,4,2,7,8};
    int x;
    cin>>x;
    int size = sizeof(arr)/sizeof(int);
    int idx = linearSearch(arr,size,x);
    cout<<x<<" is present at idx : "<<idx;
    return 0;
}