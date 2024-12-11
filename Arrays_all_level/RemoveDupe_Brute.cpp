#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    set<int> set;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }
    int k = set.size();
    for(auto elem: set){
        cout<<elem<<" ";
    }
    return 0;
}