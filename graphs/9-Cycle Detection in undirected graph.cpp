#include<bits/stdc++.h> 
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v); 
    adj[v].push_back(u);
}

void printv(vector<int> adj1[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<"The node "<<endl<<i<<"->";
        for(auto x:adj1[i])
            cout<<x<<" ";
        cout<<endl;
    }    
}


bool dfs(vector<int> adj[],bool visited[],int start,int parent)
{  
    visited[start]=true;
    for(auto x:adj[start]){
        if(visited[x]==false){
            if(dfs(adj,visited,x,start)==true)
                return true;
        }
        else
            if(x!=parent)
                return true;
    }
    return false;
}

int main() {
    int N=5;
    vector<int> adj1[N];
    addEdge(adj1, 0, 1); 
    addEdge(adj1, 1, 2); 
    addEdge(adj1, 1, 3); 
    addEdge(adj1, 2, 3); 
    addEdge(adj1, 3, 4); 

    bool visited[N];
    printv(adj1,N);
    for(int j=0;j<N;j++)
        visited[j]=false;
    
    int start=0;
    cout<<endl;
    if(dfs(adj1,visited,start,-1)==true)
        cout<<"Contains Cycle";
    else
        cout<<"Doesn't contain cycle";
         
}