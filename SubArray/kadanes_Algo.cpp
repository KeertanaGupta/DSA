#include<iostream>
#include<climits>
using namespace std;
int main(){

    int n=7, maxSum=INT_MIN,currSum=0;
    int arr[7]={3,-4,5,4,-1,7,-8};
      for(int st=0;st<n;st++){
        currSum+=arr[st];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
      }
      cout<<maxSum;

    return 0;
}