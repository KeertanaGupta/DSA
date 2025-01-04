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
class List{
  Node* head;
  Node* tail;
  public:
    List(){
      head=tail=NULL;
    }
    void push_front(int val){
      Node* newNode = new Node(val);
      if(head==NULL){
        head=tail=newNode;
        return;
      }
      else{
        newNode->next=head;
        head=newNode;
      }
    }
    void push_back(int val){
      Node* newNode=new Node(val);
      if(head==NULL){
        head=tail=newNode;
        return;
      }
      else{
        tail->next=newNode;
        tail=newNode;
      }
    }
    void pop_back(){
      if(head==NULL){   // Case 1: Empty List
        cout<<"LL is empty";
        return;
      }
      else if (head == tail) { // Case 2: Only one node
        delete head;
        head = tail = NULL;
        return;
      }
      else{
        Node* temp=head;
        while(temp->next!=tail){ //or if in case the program does not have any tail node than you can get temp->next->next==NULL
          temp=temp->next;
        }
        delete tail;
        temp->next=NULL;
        tail=temp;
      }
    }
    void printLL(){
      Node* temp=head;
      while(temp!=NULL){
      cout<<temp->data<<"->";
      temp=temp->next;
    }
    cout<<"NULL"<<endl;
  }
};
int main(){
  List ll;

  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);

  ll.push_back(4);
  
  ll.printLL();
  ll.pop_back();
  ll.printLL();
  return 0;
}