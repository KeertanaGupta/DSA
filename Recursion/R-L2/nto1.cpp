#include<iostream>
using namespace std;
void pno(int i,int n){
    if(i>n)
        return;
    cout<<n<<" ";
    pno(i,n-1);
}
int main(){
    int n=5;
    pno(1,n);
    return 0;
}