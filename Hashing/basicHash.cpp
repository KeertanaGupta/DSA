#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13] ={0}; //assuming arr can contain max value of 12
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    cout<<"Enter number of queries: ";
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<"repeated: "<<hash[number]<<endl;
    }
    return 0;  
}