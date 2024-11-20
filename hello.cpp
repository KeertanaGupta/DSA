#include<iostream>
using namespace std;
void fibo(int n,int a,int b){
    if(n==0)
        return;
    int f=0;
    f=a+b;
    cout<<f<<" ";
    fibo(n-1,b,f);
}
int main(){
    int n;
    cin>>n;
    fibo(n,-1,1);
    return 0;
}