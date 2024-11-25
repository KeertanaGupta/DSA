#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
     for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int smallest = i;
        for (int j = i + 1; j < n; j++) {
            if (vec[smallest] > vec[j]) {
                smallest = j;
            }
        }
        swap(vec[smallest], vec[i]); 
    }

    cout << "Sorted vector: ";
    for (int i : vec) { 
        cout << i << " ";
    }
    cout << endl;
    return 0;
}