#include<bits/stdc++.h>
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
        head=NULL;
        tail=NULL;
    }
// PUSH FRONT
    void pushfront(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
// Push back
    void pushback(int val){
        Node* newNode=new Node(val);
        Node* temp=head;

        if(head==NULL){
            head=tail=newNode;
        }
        // else{
            
        // }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
        }
    }
};
int main(){
    List ll;
    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    ll.pushback(4);
    ll.print();
    return 0;
}