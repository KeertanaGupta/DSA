#include<iostream>
using namespace std;
//This code uses 2 variable
void rev(int arr[],int start,int end){
    if(start>=end)
        return;
    swap(arr[start],arr[end]);
    rev(arr,start+1,end-1);
}
void fillArr(int i,int n,int arr[]){
    if(i>=n)
        return;
    cin>>arr[i];
    fillArr(i+1,n,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    fillArr(0,n,arr);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    int start=0,end=n-1;

    rev(arr,start,end);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}