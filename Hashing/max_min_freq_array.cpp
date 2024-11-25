#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int maxElement = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    int hash[maxElement + 1] = {0};

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int maxCount = 0, maxNum = -1;
    int minCount = INT_MAX, minNum = -1;
    for (int i = 0; i <= maxElement; i++) {
        if (hash[i] > maxCount) {
            maxCount = hash[i];
            maxNum = i;
        }

        if(hash[i]>0 && hash[i]<minCount){
            minCount = hash[i];
            minNum = i;
        }
    }

    cout << "Number with maximum repetition is: " << maxNum 
         << " (repeated " << maxCount << " times)" << endl;
    cout << "Number with Minimum repetition is: " << minNum 
         << " (repeated " << minCount << " times)" << endl;

    return 0;
}
