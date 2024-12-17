#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr = {4, 1, 2, 1, 2};
  int n=arr.size();
  for(int i=0;i<n;i++){
    int num=arr[i];
    int cnt=0;
    for(int j=0;j<n;j++){
      if(arr[j]==num){
        cnt++;
      }
    }
      if(cnt==1){
        cout<<num<<endl;
      }
  }
  return 0;
}