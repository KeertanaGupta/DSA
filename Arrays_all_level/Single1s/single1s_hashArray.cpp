#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr = {4, 1, 2, 1, 2};
  int n=arr.size();
  int maxi=arr[0];
  for(int i=0;i<n;i++){
    int maxi=max(maxi,arr[i]);
  }
  vector<int> hash(maxi+1,0);
  for(int i=0;i<n;i++){
    hash[arr[i]]++;
  }
  for(int i=0;i<n;i++){
    if(hash[arr[i]]==1){
      cout<<arr[i];
    }
  }
  return 0;
}