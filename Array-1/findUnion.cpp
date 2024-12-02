#include<iostream>
#include<algorithm>
using namespace std;
int removeDuplicates(int arr[], int n)
{
  if(n==0){
    return 0;
  }
  int i=0;
  for (int j=1;j<n;j++) {
    if (arr[i]!=arr[j]) {
      i++;
      arr[i]=arr[j];
    }
  }
  return i+1;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m],res[m+n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        res[i]=arr1[i];
    }
    for(int i=0;i<m;i++){
        res[n+i]=arr2[i];
    }
    sort(res,res+n+m);
    int k = removeDuplicates(res, n+m);
    cout << "Union of Array 1 and Array 2 is: " << endl;
    for (int i = 0; i < k; i++) {
        cout << res[i] << " ";
    }
    
    return 0;
}