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
    ~Node(){
        cout<<"Distructor of Node\n";
        if(next!=NULL){
            delete next;
            next=NULL;
        }
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
    ~List(){
        if(head!=NULL){
            cout<<"Destructor of List\n";
            delete head;
            head=NULL;
        }
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
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//Insert in Middle of LL
    void insert(int val,int pos){
        Node* newNode=new Node(val);
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Position is invalid\n";
                return;
            }
            temp=temp->next;
        }
        //Temp is now at the pos-1
        //Right
        newNode->next=temp->next;
        //Left
        temp->next=newNode;
    }
};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.printlist();

    ll.insert(100,2);
    ll.printlist();
    return 0;
}