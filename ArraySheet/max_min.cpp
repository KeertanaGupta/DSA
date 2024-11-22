#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
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
    int max=0,min=0;
    for(int i=0;i<n;i++){
        if(res[i]==h){
        int index_max=i;
        max=arr[index_max];
        }

        if(res[i]==n-h+1){
        int index_min= i;
        min=arr[index_min];
        }
    }
    
    cout<<h<<"th max element: "<<max<<endl;
    cout<<h<<"th min element: "<<min;
    
   return 0;
}