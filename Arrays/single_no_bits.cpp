#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int val:vec){
        ans^=val;
    }
    cout<<"Unique no is :"<<ans;
    return 0;
}

