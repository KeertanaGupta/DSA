#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5}; 
  //cout<<arr<<" "<<&arr<<" "<<*arr<<endl;
  cout<<*arr<<endl;       //1
  cout<<*(arr+1)<<endl;   //2
  // int a=15;
  // arr=&a;  // error as arrays are constant pointers 


  int a=10;
  int* p=&a;
  cout<<p<<" "<<*p<<" "<<&p<<endl;
  p++; // increase in the size by 1 integer i.e 4 bytes
  cout<<p<<" "<<*p<<" "<<&p<<endl;

  // in c++ ptr1+ptr2 -> Not allowed
  // but we can ptr1 - ptr2 values if both are of same type
  // (int)ptr1 - (int)ptr2 => no.of blocks of type(int)
  // int *ptr2;
  // int *ptr1 = ptr2+2;
  // cout<<ptr1-ptr2<<endl;  //2

  //compairing 2 ptrs
  
  int *ptr1;
  int *ptr2;
  cout<<ptr1<<" "<<ptr2<<endl;
  cout<<(ptr1<ptr2)<<endl;
  return 0;
}