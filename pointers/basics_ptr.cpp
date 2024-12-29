#include<iostream>
using namespace std;
int main(){
  int a=10;
  cout<<"a: "<<a<<endl<<"&a: "<<&a<<endl;

  int* ptr=&a;
  cout<<"ptr: "<<ptr<<endl<<"&ptr: "<<&ptr<<endl<<"*ptr: "<<*ptr<<endl;

  int** ptr2=&ptr;
  cout<<"ptr2: "<<ptr2<<endl<<"&ptr2: "<<&ptr2<<endl<<"*ptr2: "<<*ptr2<<endl<<"**ptr2: "<<**ptr2<<endl;

  int** ptr3=NULL;
  cout<<"ptr3: "<<ptr3<<endl;
  cout<<"&ptr3: "<<&ptr3<<endl;
  //cout<<"*ptr3: "<<*ptr3<<endl; -> it will give segmentation fault -> as null pointer is not pointing to any valid memory location
  return 0;
} 