#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

struct Edge
{
    int src, dest;
};

class Graph
{
    // Function to allocate a new node for the adjacency list
    Node *getAdjListNode(int dest, Node *head)
    {
        Node *node = new Node;
        node->val = dest;

        // Point new node to the current head
        node->next = head;
        return node;
    }
    int N; // Total number of nodes in the graph
public:
    //  An array of pointers to Node to represent adjacency list
    Node **head;
    Graph(Edge edges[], int n, int N)
    {
        // allocate memory
        head = new Node *[N]();
        // add edges to the directed graph
        for (int i = 0; i < n; i++)
        {
            int src = edges[i].src;
            int dest = edges[i].dest;
            Node *newNode = getAdjListNode(dest, head[src]); // inserting at the beginning
            head[src] = newNode;
        }
    }
};
// print all neighboring vertices of given vertex
void printList(Node *ptr)
{
    while (ptr != nullptr)
    {
        cout << "->" << ptr->val;
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    // array of graph edges
    Edge edges[] = {
        // pair (src, dest) represents edge from src to dest
        {0, 1},
        {1, 2},
        {2, 0},
        {2, 1},
        {3, 2},
        {4, 5},
        {5, 4}};

    //Total nodes in the graph
    int N = 6;
    // calculate the total number of edges
    int n = sizeof(edges) / sizeof(edges[0]);

    Graph graph(edges, n, N);
    for (int i = 0; i < N; i++)
    {
        cout << i << "-";
        printList(graph.head[i]);
    }

    return 0;
}