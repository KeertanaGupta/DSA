#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
    Node(int val){
      data=val;
      next=NULL;
    }
};
class Stack{
  Node* head;

  public:
  // Stack(): head(NULL){}
  Stack(){
      head=NULL;
    }

  bool isEmpty(){
    return head==NULL;
  }
  void push(int val){
    Node* newNode=new Node(val);
    if(isEmpty()){
      head=newNode;
      return;
    }
    newNode->next=head;
    head=newNode;
  }
  int pop(){
    if(isEmpty()){
      return -1;
    }
    int top=head->data;
    head=head->next;
    return top;
  }
  int peek(){
    if(isEmpty()){
      return -1;
    }
    return head->data;
  }
};
int main(){
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  while (!s.isEmpty()){
    cout<<s.peek()<<endl;
    s.pop() ;
  }
  
  return 0;
}