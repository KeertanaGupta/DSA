#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],res[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int rank=n;
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                rank--;
            }
                res[i]=rank;
        }
    }
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Ranking: ";
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}