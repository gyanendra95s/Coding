#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>>* l;
public:
    Graph(int V){
        this->V=V;
        l=new list<pair<int,int>>[V];
    }

    void addEdge(int u,int v,int w){
        l[u].push_back({v,w});
        l[v].push_back({u,w});
    }

    void print(){
        for(int u=0;u<V;u++){
            list<pair<int,int>>neighbours=l[u];
            cout<<u<<":";

            for(auto V:neighbours){
            cout<<"("<<V.first<<","<<V.second<<")";
        }
        cout<<endl;
        }
    }
};
int main(){
    Graph g(5);

    g.addEdge(0,1,4);
    g.addEdge(1,2,1);
    g.addEdge(1,3,3);
    g.addEdge(2,3,2);
    g.addEdge(2,4,5);

    g.print();
    return 0;
}