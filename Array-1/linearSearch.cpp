#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    int idx = search(arr,n,x);
    cout<<x<<" is present at index "<<idx;
    return 0;
}