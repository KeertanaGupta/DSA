#include<iostream>
#include<vector>
using namespace std;
class Stack{
  vector<int> list;
  public:
    void push(int val){
      list.push_back(val);
    }
    int pop(){
      if(list.empty()){
        return -1;
      }
      int top=list.back();
      list.pop_back();
      return top;
    }
    int peek(){
      if(list.empty()){
        return -1;
      }
      return list.back();
    }
    bool isEmpty(){
      return list.empty();
    }
};

int main(){
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  while (!s.isEmpty()) {
        cout << s.peek() << endl;
        s.pop();
    }
  return 0;
}