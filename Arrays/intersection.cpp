#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1,4,5,2,8};
    int arr2[] = {5,3,1,9,4};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    return 0;
}