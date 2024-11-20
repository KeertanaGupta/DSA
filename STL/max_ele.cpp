#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={3,5,9,2,4};
    int maxi = *max_element(v.begin(),v.end());
    cout<<maxi<<endl;
    int mini = *min_element(v.begin(),v.end());
    cout<<mini;
    return 0;
}