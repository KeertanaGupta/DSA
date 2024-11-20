#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int count=0,n,temp,sum=0;
    cin>>n;
    int dupe=n,dupe2=n;
    while(n>0){
        count++;
        n=n/10;
    }
    while (dupe>0)
    {
        temp=dupe%10;
        sum= sum+ pow(temp,count);
        dupe=dupe/10;
    }
    if (dupe2==sum) 
        cout<<"yes it is an armstrong no";
    else
        cout<<"no it is not an armstrong no";
}