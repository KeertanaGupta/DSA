#include<iostream>
using namespace std;
void Tsum(int sum,int n){
    if(n==0)
        cout<<sum;
    Tsum(sum+n,n-1);

}
int main(){
    int sum=0; 
    int n=0;
    Tsum(sum,n);
    return 0;
}