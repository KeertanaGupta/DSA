#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<x<<" is found on "<<i<<"th index.";
            return 0;
        }
    }
    cout<<x<<" is not present in the array.";
    return 0;
}