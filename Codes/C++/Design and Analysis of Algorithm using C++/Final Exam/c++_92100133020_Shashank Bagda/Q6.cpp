// DAA - Final Exam
// Shashank Bagda - 92100133020
// Question 6

#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    vector<int> *adj;
    
    public:
        Graph(int V)
        {
            this->V = V;
            adj = new vector<int>[V];
        }

        void addEdge(int v, int w)
        {
            adj[v].push_back(w);
        }

        void BFS(int s)
        {
            bool *visited = new bool[V];
            fill(visited, visited + V, false);
            queue<int> q;
            visited[s] = true;
            q.push(s);

            while(!q.empty())
            {
                int v = q.front();
                cout<<v<<" ";
                q.pop();

                for(int i : adj[v])
                {
                    if(!visited[i])
                    {
                        visited[i] = true;
                        q.push(i);
                    }
                }
            }
        }
};

int main ()
{
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 3);
    g.addEdge(4, 6);
    g.addEdge(6, 5);

    cout<<"The path of BFS starting from 0 : ";
    g.BFS(0);
    
    return 0;
}