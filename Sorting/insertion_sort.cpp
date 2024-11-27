#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int j=i-1;
        while(j>=0 && curr<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = curr;
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}