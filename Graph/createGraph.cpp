#include <bits/stdc++.h>
using namespace std;

// we can use this method or in place of T put the any data type
template<typename T>

class graph
{

public:
    unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool dir)
    {
        // dir = 0 -> means undirected graph
        // dir = 1 -> means directed graph

        // create the edge from u to v
        adj[u].push_back(v);

        if (dir == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }

            cout << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int m;
    cout << "Enter the number of edges: ";
    cin >> m;

    graph<int> g;


    for(int i=0; i< m; i++){
         int u, v;
        cout << "Enter the edges between u & v: ";
        cin >> u >> v;

        //creating an undirected graph
         g.addEdge(u, v, 0);
    }
   

    // print the adj list 
    g.printAdjList();

    return 0;
};