#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre-compute
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    //unordered_map stores in random order
    //proof
    for(auto it : mpp){ //for traversing(iterate) in unordered_map we use auto iterator(auto it)
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<"repeation: "<<mpp[num]<<endl;
    }

    return 0;
}