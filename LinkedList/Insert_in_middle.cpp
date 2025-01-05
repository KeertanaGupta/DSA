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
      Node* newNode = new Node(val);
      if(head==NULL){
        head=tail=newNode;
        return;
      }
      else{
        tail->next = newNode;
        tail=newNode;
      }
    }
    void Insert_in_mid(int val,int pos){
      Node* newNode=new Node(val);
      if(pos<0){
        cout<<"Invalid pos\n";
      }
      else if (pos==0)
      {
        push_front(val);
        return;
      }
      else{
        Node* temp=head;
        int i=0;
        while(i<pos-1){
          if(temp==NULL){
          cout<<"Invalid pos\n";
          return;
          }
          temp=temp->next;
          i++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
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

  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);

  ll.Insert_in_mid(4,2);
  
  ll.printLL();
  return 0;
}