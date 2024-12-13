#include<iostream>
using namespace std;
int main(){
    int N,k,count=0;;
    cin>>N>>k;
    int arr[N];
    for(int i=0;i<N;i++){
      cin>>arr[i];
    }
    for(int i=0;i<N;i++){
      int sum=0;
      for(int j=i;j<N;j++){
        sum +=arr[j];
        if(sum==k){
        count=max(count,j-i+1);
      }
      }
    }
    cout<<count<<endl;
    return 0;
}