#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=nullptr;
    }
};

static int idx=-1;

Node* buildTree(vector<int>Nodes){
    idx++;
    if(Nodes[idx]==-1){
        return NULL;
    }

    Node* currNode=new Node(Nodes[idx]);
    currNode->left=buildTree(Nodes);
    currNode->right=buildTree(Nodes);

    return currNode;
}
int main(){
    vector<int>Nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root=buildTree(Nodes);
    cout<<"Root="<<root->data;
    return 0;
}