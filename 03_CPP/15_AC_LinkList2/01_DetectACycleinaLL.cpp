#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class List{
public:
    Node* head;
    Node* tail;
    
    List(){
        head=nullptr;
        tail=nullptr;
    }

    void push_front(int val){
        Node* newNode=new Node(val);

        if(tail==nullptr){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }

    void pop_front(){
        if(head==nullptr){
            return;
        }

        Node* temp=head;
        head=head->next;

        temp->next=nullptr;
        delete temp;
    }

    void printList(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

    bool isCycle(Node* head){
        Node* slow=head;
        Node* fast=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                cout<<"Cycle exist\n";
                return true;
                break;
            }
        }
        cout<<"cycle doesn't exist\n";
        return false;
    }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // ll.printList();
    ll.tail->next=ll.head;
    ll.isCycle(ll.head);
    return 0;
}