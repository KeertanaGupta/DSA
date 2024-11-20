#include<iostream>
using namespace std;
void pno(int i,int n){
    if(i>n)
        return;
    pno(i+1,n);
    cout<<i;

}
int main(){
    int n=5;
    pno(1,n);
    return 0;
}