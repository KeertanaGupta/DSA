#include<iostream>
using namespace std;
int main(){
    int count=0,res[5];
    int arr[5]={-2,5,-1,8,4};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        if(arr[i]<0){
            count++;
        }else{
            res[j]=arr[i];
        }
        }
    }
    for(int i=0;i<5;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}