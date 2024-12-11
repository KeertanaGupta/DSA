#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of array elements: ";
    cin>>n;
    int arr[n];
    vector<int>temp;
    cout<<"Enter Array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int size=temp.size();
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }
    for(int i=size;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}