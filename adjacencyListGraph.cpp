#include <iostream>
#include <list>
using namespace std;

void addEdge(list<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void display(list<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << i << "--->";
        list<int>::iterator itr;
        for (itr = adj[i].begin(); itr != adj[i].end(); itr++)
        {
            cout << *itr << " ";
        }
        cout << endl;
    }
}
int main()
{
    int v = 6; //there are 6 vertices in the graph
    //create an array of lists whose size is 6
    list<int> adj_list[v];
    addEdge(adj_list, 0, 4);
    addEdge(adj_list, 0, 3);
    addEdge(adj_list, 1, 2);
    addEdge(adj_list, 1, 4);
    addEdge(adj_list, 1, 5);
    addEdge(adj_list, 2, 3);
    addEdge(adj_list, 2, 5);
    addEdge(adj_list, 5, 3);
    addEdge(adj_list, 5, 4);
    display(adj_list, v);
    return 0;
}