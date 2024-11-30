#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>vec;
    bool isUnique;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        isUnique=true;
        for(int j=0;j<vec.size();j++){
            if(vec[j]==arr[i]){
                isUnique=false;
                break;
            }
        }
        if(isUnique){
            vec.push_back(arr[i]);
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}