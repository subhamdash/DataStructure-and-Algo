#include<bits/stdc++.h> 
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}
int main() {
    int N=5;
    vector<int> adj[N];
    queue<int> q;
    int start=0;
    int distance[N];
    bool visited[N];
    for(int j=0;j<N;j++)
        visited[j]=false;
    
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    for(int i=0;i<N;i++)
    {
        cout<<"The node "<<endl<<i;
        for(auto x:adj[i])
            cout<<"->"<<x;
        cout<<endl;
    }
    
    
    visited[start]=true;
    distance[start]=0;
    q.push(start);
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        for(auto x:adj[s])
        {
            if (visited[x])
                continue;
            visited[x]=true;
            distance[x]=distance[s]+1;
            q.push(x);
        }
    }
    cout << "Following are the distance From Node starting from vertex"<< start<< "\n"; 
    for(int i=0;i<N;i++)
        cout<<i<<"  "<<distance[i]<<endl; 
}