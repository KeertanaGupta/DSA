#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s,int data){
    if(s.empty()){
      s.push(data);
      return;
    }
    int top=s.top();
    s.pop();
    pushAtBottom(s,data);
    s.push(top);
  }
int main(){
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  int data=4;
  pushAtBottom(s,data);
  cout << "Stack elements from top to bottom:" << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
  return 0;
}