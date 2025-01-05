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
      Node* newNode=new Node(val);
      if(head==NULL){
        head=tail=newNode;
        return;
      }
      else{
        newNode->next = head;
        head=newNode;
      }
    }
    void Search(int val){
      Node* temp=head;
      int i=0;
      bool found=false;
      while(temp!=NULL){
        if(temp->data==val){
          cout<<val<<" is at the position/index. "<<i<<endl;
          found=true;
          return;
        }
        i++;
        temp=temp->next;
      }
      if(!false){
        cout<<val<<" is not in this LL"<<endl;
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
  
  ll.printLL();
  ll.Search(2);
  ll.Search(4);
  return 0;
}