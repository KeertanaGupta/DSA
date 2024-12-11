#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cout<<"Enter no of array elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    cout<<ans;
    return 0;
}