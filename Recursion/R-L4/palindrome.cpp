#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(int l,string str){
    int r=str.length();
    if(l>=r/2)
        return true;
    if(str.at(l)!=str.at(r-l-1))
        return false;
    isPalindrome(l+1,str);
}
int main(){
    string str;
    getline(cin, str);
    if(isPalindrome(0,str))
        cout<<str<<" is a palindrome";
    else   
        cout<<str<<" is not a palindrome";
    return 0;
}