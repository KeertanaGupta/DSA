#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,6,1,7,5};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Largest num is: "<<max;
    return 0;
}