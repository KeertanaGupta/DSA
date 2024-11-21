#include<iostream>
using namespace std;
void Psum(int sum,int n){
    if(n==0){
        cout<<sum;
        return;
    }
    Psum(sum+n,n-1);
}
int main(){
    int n;
    cin>>n;
    Psum(0,n);
    return 0;
}