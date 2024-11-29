#include<iostream>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(i<=high && arr[i]<= pivot){
            i++;
        }
        while(j>=low && arr[j]>pivot){
            j--;
        }
        if(i<j){
        swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
    int pivotIdx = partition(arr,low,high);
    quickSort(arr,low,pivotIdx-1);
    quickSort(arr,pivotIdx+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}