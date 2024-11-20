#include<iostream>
using namespace std;
int main(){
    int lbi,ubi,lbj,ubj,b,w;
    cin>>lbi>>ubi>>lbj>>ubj>>b>>w;
    int m = ubi - lbi + 1;
    int n = ubj - lbj + 1;
    int i,j;
    cin>>i>>j;
    int rm = b + ((i-lbi)*n+(j-lbj))*w;
    int cm = b + ((i-lbi)+(j-lbj)*m)*w;
    cout<<"Row Address : "<<rm<<endl;
    cout<<"Column Address : "<<cm<<endl;

    return 0;
}