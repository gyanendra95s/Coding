#include<bits/stdc++.h>
using namespace std;
//For Single Node which contain data and pointer..
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
//Now make collection of Node known as LL
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
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
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printlist(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
    void reverseaLL(){
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL){
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        cout<<endl;
    }
};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // ll.printlist();
    ll.push_back(4);
    ll.push_back(5);
    ll.printlist();
//reverse a LL
    ll.reverseaLL();
    ll.printlist();
    return 0;
}