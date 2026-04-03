#
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

    bool cycleBFS(int src , vector<bool> &vis){ //O(v+e)
        queue<pair<int,int>> q;

        q.push({src,-1});
        vis[src] = true;

        while(q.size()>0){
            int u =q.front().first;
            int parU = q.front().second;
            q.pop();

            for(int v: l[u]){
                if(!vis[v]){
                    q.push({v,u});  // unvisited 
                    vis[v] = true;
                }else if(v != parU){
                    return true;
                }
            }
        };
        return  false;
    }

    bool cycle(){
        vector<bool> vis(v ,false);

        for(int i=0; i<v ; i++){
            if(!vis[i]){
                if(cycleBFS(i,vis)){
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
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(3,4);

    g.printAdjList(); cout << endl;

    cout << g.cycle(); cout << endl;
    return 0;
}