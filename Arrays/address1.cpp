#include <iostream>
using namespace std;

int main()
{
    int base,w,lbi,ubi,lbj,ubj;
    cin>>lbi>>ubi>>lbj>>ubj>>base>>w;
    int m=ubi-lbi+1;
    int n=ubj-lbj+1;
    int pi,pj;
    cin>>pi>>pj;
    int rpa=base+w*((pi-lbi)*n+(pj-lbj));
    int cpa=base+w*((pj-lbj)*m+(pi-lbi));
    cout<<"row address :"<<rpa<<endl;
    cout<<"column address :"<<cpa<<endl;

    return 0;
}