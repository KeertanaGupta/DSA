#include<iostream>
#include<string>
using namespace std;
int main(){
    string str; 
    cin>>str;
    int hash[256]={0};
    for(int i=0;i<str.length();i++){
        hash[str[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;
}