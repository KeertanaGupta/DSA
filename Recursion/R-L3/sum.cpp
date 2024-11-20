#include<iostream>
using namespace std;
int Tsum(int sum,int n){
    if(n==0)
        return sum;
    sum=sum+n;
    return Tsum(sum,n-1);

}
int main(){
    int sum=0; 
    int n=5;
    int res = Tsum(sum,n);
    cout<<res;
    return 0;
}