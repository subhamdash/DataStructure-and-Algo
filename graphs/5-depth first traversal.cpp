#include<bits/stdc++.h> 
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}
void dfs(vector<int> adj[],bool visited[],int start)
{  
    if (visited[start]) 
        return;
    cout<<start<<"   ";
    visited[start]=true;
    for(auto x:adj[start])
        dfs(adj,visited,x);    
}

int main() {
    int N=8;
    vector<int> adj[N];
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 3, 6); 
    addEdge(adj, 2, 5); 
    addEdge(adj, 5, 7); 
    bool visited[N];
    for(int i=0;i<N;i++)
    {
        cout<<"The node "<<endl<<i;
        for(auto x:adj[i])
            cout<<"->"<<x;
        cout<<endl;
    }
    int start=0;
    cout << "Following is Depth First Traversal starting from vertex"<<start<< "\n"; 
    dfs(adj,visited,start);
        
}