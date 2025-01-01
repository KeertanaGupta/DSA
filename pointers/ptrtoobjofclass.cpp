#include<iostream>
#include<string>
using namespace std;

class A{
  protected: int x;
  public: 
    void read_display(){
      cout<<"Enter Value of x: ";
      cin>>x;
      cout<<x;
    }
};
int main(){
  A a, *p;
  p=&a;
  p->read_display();
}