// types of graph( connected and disconnected)
// -> undir weighted graph
// -> undir unweighted graph
// -> dir weighted graph
// -> dir unweighted graph

#include <iostream>
#include <list>
#include <vector>
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
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.printAdjList();

    return 0;
}