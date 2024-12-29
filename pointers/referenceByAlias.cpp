#include<iostream>
using namespace std;
void changeA(int &b){  //& -> here it is symbol of Alias(it means b is just another name of a)
  b = 20;
}
int main(){
  int a = 10;
  changeA(a);
  cout<<a;
}