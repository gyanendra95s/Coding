#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int>* l;
public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    
// Same as Level Order Traversal
    void bfs(){// T.C=0(V+E)
        queue<int>q;
        vector<bool>visited(V,0);
        q.push(0);
        visited[0]=true;

        while(!q.empty()){
            int u=q.front();
            q.pop();

            cout<<u<<" ";

            list<int>neighbour=l[u];
            for(int v:neighbour){
                if(!visited[v]){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
        cout<<endl;
    }
};
int main(){
    Graph graph(7);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,4);
    graph.addEdge(3,4);
    graph.addEdge(3,5);
    graph.addEdge(4,5);
    graph.addEdge(5,6);

    graph.bfs();
    return 0;
}