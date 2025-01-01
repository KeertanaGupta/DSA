//DAY 29 : Desert Fossil Mystery
// Archaeologists have uncovered a fascinating array of fossils in the desert, each assigned a unique numeric code representing its type. A fossil is considered rare if the frequency of its type in the collection matches the numeric code assigned to it.

// Your goal is to identify all rare fossil types in the collection. Output these rare types in ascending order. If no rare fossil types exist, output -1.

// Input Format

// The first line contains an integer T, the number of test cases.

// For each test case: The first line contains an integer n, the number of fossils in the collection. The second line contains n integers, representing the numeric codes of the fossils.

// Constraints

// 1<=T<=10^3
// 1<=n<=1000
// 1<=fossil_type[i]<=1000
// Output Format

// For each test case, output a single line:

// The numeric codes of all rare fossil types in ascending order, separated by spaces.
// If no rare fossil types exist, output -1.
// Sample Input 0

// 1
// 6
// 1 1 1 2 2 3
// Sample Output 0

// 2
// Explanation 0

// In the given collection:

// Fossil type 1 appears 3 times.
// Fossil type 2 appears 2 times.
// Fossil type 3 appears 1 time.
// The only rare fossil type is 2, as its count matches its numeric code.

#include<iostream>
#include<unordered_map>
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
    //unordered_map stores in random order
    //proof
    for(auto it : mpp){ //for traversing(iterate) in unordered_map we use auto iterator(auto it)
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<"repeation: "<<mpp[num]<<endl;
    }

    return 0;
}