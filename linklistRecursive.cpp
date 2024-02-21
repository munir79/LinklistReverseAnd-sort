#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
void printLink(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" "<<endl;
        tmp=tmp->next;
    }
}
void printRecursion(Node *n){
    if(n==NULL) return;
   
    printRecursion(n->next);
     cout<<n->val<<" ";
}
int main(){
    Node *head=new Node(10);
      Node *a=new Node(20);
      Node *c =new Node(30);
      Node *d=new Node(40);
      Node *e=new Node(50);
      head->next=a;
      a->next=c;
      c->next=d;
      d->next=e;
      printLink(head);
      cout<<endl;
      cout<<" in the bellow recursive print"<<endl;
      printRecursion(head);

}