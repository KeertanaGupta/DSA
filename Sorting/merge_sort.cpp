#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int low, int mid,int high){
    vector<int> vec;
    int left = low;  //[low...mid]
    int right = mid+1;  //[mid+1...high]
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            vec.push_back(arr[left]);
            left++;
        }
        else{
            vec.push_back(arr[right]);
            right++;
        }
    }

    while (left<=mid)
    {
        vec.push_back(arr[left]);
            left++;
    }
    while (right<=high)
    {
        vec.push_back(arr[right]);
            right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = vec[i - low];
    }
    
}
void mergeSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}