#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={3,5,9,2,4};
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    vector<int> pqr={3,5,9,2,4};
    sort(pqr.begin(),pqr.end(),greater<int>());
    for(auto it=pqr.begin();it!=pqr.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    vector<int> abc={3,5,9,2,4};
    sort(abc.begin()+1,abc.begin()+4);
    for(auto it=abc.begin();it!=abc.end();it++){
        cout<<*(it)<<" ";
    }
    return 0;
}