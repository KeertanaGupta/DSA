#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n-1];
    cout<<"Enter "<<n-1<<" Array elements: ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                count++;
                break;
            }
        }
        if(count==0){
        cout<<i<<" ";
        }
    }
    return 0;
}