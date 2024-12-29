#include<iostream>
#include<vector>
using namespace std;

class Node{ //can be struct Node as well but class provides benefits of OOPs as well
  public: int data;
          Node* next;
          Node(int data1, Node* next1){
            data=data1;
            next=next1;
          }
          Node(int data1){
            data=data1;
            next=nullptr;
          }
};
int main(){
  vector<int> arr={2,5,8,7};
  Node y =  Node(arr[0],nullptr);
  cout<<y.data<<" "<<y.next<<endl;
  // Node* y = new Node(arr[0],nullptr);
  // cout<<y->data<<" "<<y->next<<" "<<y; 
  //-->Output-->2 0 0x1007f30
  return 0;
}