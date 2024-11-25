#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre-compute
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int maxCount = 0, maxNum = -1;
    int minCount = INT_MAX, minNum = 0;
    for(auto it : mpp){
        if(it.second > maxCount){
            maxCount = it.second;
            maxNum = it.first;
        }
        if(it.second > 0 && it.second < minCount){
            minCount = it.second;
            minNum = it.first;
        }
    }
    cout << "Number with maximum repetition is: " << maxNum 
         << " (repeated " << maxCount << " times)" << endl;
    cout << "Number with Minimum repetition is: " << minNum 
         << " (repeated " << minCount << " times)" << endl;

    return 0;
}