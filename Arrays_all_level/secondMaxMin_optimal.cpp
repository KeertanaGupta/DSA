#include<iostream>
#include<climits>
using namespace std;
void second(int arr[],int n){
    if(n<2){
        cout<<"-1";
        return;
    }
    int small=INT_MAX, secSmall=INT_MAX;
    int large=INT_MIN, secLarge=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            secSmall=small;
            small=arr[i];
        }else if (arr[i] < secSmall && arr[i] != small) {
            secSmall = arr[i];
        }
        if(arr[i]>large){
            secLarge=large;
            large=arr[i];
        }else if (arr[i] > secLarge && arr[i] != large) {
            secLarge = arr[i];
        }
    }
    cout<<"2nd largest num in arr is: "<<secLarge<<endl;
    cout<<"2nd Smallest num in arr is: "<<secSmall<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    second(arr,n);
    return 0;
}