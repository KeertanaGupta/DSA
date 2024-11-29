#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end, int size){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[] = {3,5,7,1,4};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size-1;
    reverse(arr,start,end,size);
    return 0;
}