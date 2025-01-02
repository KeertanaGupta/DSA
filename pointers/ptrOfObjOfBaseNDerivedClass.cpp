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
class B:public A{
  protected:int y;
  public: 
    void read_display(){
      cout<<"Enter Value of x and y: ";
      cin>>x>>y;
      cout<<x<<" "<<y;
    }
};
int main(){
  A a;
  B b, *p;
  // p=&a;
  p=&b;
  p->read_display();
}