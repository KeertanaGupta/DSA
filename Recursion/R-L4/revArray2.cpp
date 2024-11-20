#include<iostream>
using namespace std;
//1 pointer only
void rev(int arr[],int i,int n){
    if(i>=(n-i-1))//base case can also be if(i>=n/2) return;
        return;
    swap(arr[i],arr[n-i-1]);
    rev(arr,i+1,n);
}
int main(){
    int n;
    cout<<"n is: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements for array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<"Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout<<endl;
    rev(arr,0,n);
    cout<<"Reversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout<<endl;
    return 0;
}