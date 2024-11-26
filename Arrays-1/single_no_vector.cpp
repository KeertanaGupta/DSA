#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    bool isUnique;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        isUnique = true;
        for (size_t j = 0; j < n; j++)
        {
            if(i!=j && vec[i]==vec[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout<<"Number that apperared only once is: " <<vec[i]<<endl;
        }
    }
    
    return 0;
}