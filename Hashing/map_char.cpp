#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    string str;
    cin>>str;
    map<char,int>mpp;
    for(int i=0;i<str.length();i++){
        mpp[str[i]]++;
    }
    int q;
    cin>>q;
    while (q--)
    {
        char c;
        cin>>c;
        if(mpp.find(c)!=mpp.end())
            cout<<"Repeation: "<<mpp[c]<<endl;
        else
            cout<<"Character "<<c<<" not found!!"<<endl;
    }
    
   return 0;
}