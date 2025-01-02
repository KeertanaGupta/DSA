#include<iostream>
#include<string>
using namespace std;

class A{
  protected: int x;
  public: 
    void read_display(){
      cout<<"This is display function of base class\n";
      cout<<"Enter Value of x: ";
      cin>>x;
      cout<<x<<endl;
    }
};
class B:public A{
  protected:int y;
  public: 
    void read_show(){
      cout<<"This is show function of base class\n";
      cout<<"Enter Value of x and y: ";
      cin>>x>>y;
      cout<<x<<" "<<y<<endl;
    }
};
int main(){
  A a;
  B b, *p;
  //p=&a; //error: invalid conversion from 'A*' to 'B*' [-fpermissive]
  p=&b;
  p->read_display();
  p->read_show(); 
}