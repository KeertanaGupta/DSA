#include<iostream>
#include<string>
using namespace std;
int f(char c,string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str.at(i)==c){
            count++;
        }
    }
    return count;
}
int main(){
    int res = f('a',"banfdsaj");
    cout<<res;
    return 0;
}