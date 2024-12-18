#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
  vector<int> arr = {4, 1, 2, 1, 2};
  int n = arr.size();
  map<int,int>mpp;
  for(int i=0;i<n;i++){
    mpp[arr[i]]++;
  } 
  for(auto it:mpp){
    if(it.second==1){
      cout<<it.first;
    }
  }
  return 0;
}