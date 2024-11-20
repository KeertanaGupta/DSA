#include<iostream>
using namespace std;
int Tsum(int n){
    if(n==0)
        return 0;
    return n+Tsum(n-1);

}
int main(){
    int n=5;
    cout<<Tsum(n);
    return 0;
}