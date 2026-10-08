#include<bits/stdc++.h>
using namespace std;
//For Single Node which contain data and pointer..
class Node{
    int data;
    Node* next;
public:
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
};
int main(){
    List ll();
    return 0;
}