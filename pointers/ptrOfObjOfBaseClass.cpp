#include<iostream>
#include<string>
using namespace std;

class A{
  protected: int x;
  public: 
    void read_display(){
      cout<<"This is display func of base class\n";
      cout<<"Enter Value of x: ";
      cin>>x;
      cout<<x<<endl;
    }
};
class B:public A{
  protected:int y;
  public: 
    void read_show(){
      cout<<"This is show func of base class\n";
      cout<<"Enter Value of x and y: ";
      cin>>x>>y;
      cout<<x<<" "<<y<<endl;
    }
};
int main(){
  A a, *p;
  B b;
  p->read_display();
  // p->read_show(); //error->class A' has no member named 'read_show

  p=&b;
  p->read_display();
}