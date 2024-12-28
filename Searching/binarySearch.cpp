#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int x){
  int start=0;
  int end=n-1;
  while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==x){
      cout<<x<<" is found at idx "<<mid;
      break;
    }
    else if(arr[mid]>x)
      end = mid-1;
    else
      start = mid+1;
  }
}
int main(){
  int arr[] = {1,4,2,7,8};
  int x;
  cin>>x;
  int size = sizeof(arr)/sizeof(int);
  binarySearch(arr,size,x);
  return 0;
}