
#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Graph{
    int v;
    list<int>*l;  //int *arr dynamic arr

public:
    Graph(int v){
        this->v = v;
        l = new list<int>[v];
        //arr = new int[v]
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjList(){
        for(int i=0; i<v ; i++){
            cout << i << " :" ;
            for(int neigh : l[i]){
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    void BFS(int v){ //O(v+e)
        queue<int> q;
        vector<bool> visited(this->v , false);

        q.push(v);
        visited[v] = true;

        while(!q.empty()){
            int d = q.front();
            q.pop();

            cout << d << " ";

            for(int n : l[d]){
                if(!visited[n]){
                    q.push(n);
                    visited[n] = true;
                }
            }
        }
    }

    void DFSunit(int v , vector<bool> &vis){
        cout << v << " ";
        vis[v] = true;
         
        for(int u : l[v]){
            if(!vis[u]){
                DFSunit(u, vis);
            }
        }
    }

    void DFS(int v){  //O(v+e)
        vector<bool> vis(this->v , false);
        DFSunit(v , vis );

    }

    bool isCycle(int src, int par , vector<bool> &vis){
        vis[src] = true;

        for(int v: l[src]){
            if(!vis[v]){
                if(isCycle(v,src,vis)){
                    return true;
                }
                }
                else if(v != par){
                    return true;
                }
            }
            return false;
    }

    bool Cycle(){
        vector<bool> vis(this->v, false);
        for(int i = 0 ; i < this->v ; i++){
            if(!vis[i]){
                if(isCycle(i,-1,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,0);

    g.printAdjList(); cout << endl;

    g.BFS(0); cout <<endl;

    g.DFS(0); cout << endl;

    cout << g.Cycle(); cout << endl;

    return 0;
}