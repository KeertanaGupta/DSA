#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,3,4,5,7,9,10};
    for(int i=1;i<=10;i++){
        int count=0;
        for(int j=0;j<10;j++){
            if(arr[j]==i){
                count++;
                break;
            }
        }
        if(count==0){
        cout<<i<<" ";
    }
    }
    return 0;
}