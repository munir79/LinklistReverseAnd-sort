#include<bits/stdc++.h>
#include <iostream>
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


void Insert_at_tail(Node *&head ,Node *&tail,int val){
    Node *NewNode=new Node(val);
    if(head==NULL){
        head=NewNode;
        tail=NewNode;
        return;

    }
    tail->next=NewNode;
    tail=NewNode;
}

void PrintLinkLIst(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

int maximumfind(Node *head){
    int max=head->val;
    if(head==NULL) return INT_MIN;
    for(Node *i=head;i!=NULL;i=i->next){
        if(i->val>max){
            max=i->val;
        }
    }
    return max;
}
int main(){
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        else{
        Insert_at_tail(head,tail,val);
        }
    }
    PrintLinkLIst(head);
    cout<<" maximum value of this link list is :"<<maximumfind(head);
}