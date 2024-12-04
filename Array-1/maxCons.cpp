#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of array elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array elements(only 0s and 1s): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0,maxCnt=INT_MIN;  
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>maxCnt){
                maxCnt=count;
            }
        }
        if(arr[i]==0){
            count=0;
        }
    }
    cout<<maxCnt;
    return 0;
}