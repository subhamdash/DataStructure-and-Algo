#include<bits/stdc++.h> 
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v); 
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


void dfs(vector<int> adj[],bool visited[],int start,stack<int> &Stack)
{  
    visited[start]=true;
    for(auto x:adj[start]){
        if(!visited[x])
        dfs(adj,visited,x,Stack);
    }
    Stack.push(start);
}

void scc(vector<int> adj[],vector<int> swapadj[],bool visited[],int N)
{
    stack<int> Stack; 
    for(int i=0;i<N;i++)
    {
        if(!visited[i])
            dfs(adj,visited,i,Stack);
    }

        int v = Stack.top(); 
    // Check that whether it is a mother graph or not
    for(int j=0;j<N;j++)
        visited[j]=false;
    dfs(adj,visited,v,Stack);
    
    for(int i=0;i<N;i++)
    {
        if(visited[i]==false)
            v=-1;
    }
    if (v!=-1)
        cout<<"The Mother vertices from which all the nodes can be travesed is "<<v;
    else
        cout<<"There is no mother vertex in the graph";
    
    
    

    
}
int main() {
    int N=7;
    vector<int> adj1[N];
    addEdge(adj1, 0, 1); 
    addEdge(adj1, 0, 2); 
    addEdge(adj1, 1, 3); 
    addEdge(adj1, 4, 1); 
    addEdge(adj1, 6, 4); 
    addEdge(adj1, 5, 6); 
    addEdge(adj1, 5, 2); 
    addEdge(adj1, 6, 0);

    bool visited[N];
    printv(adj1,N);
    //Swapped edges of the graph
    vector<int> swapadj[N];
    for(int i=0;i<N;i++)
    {
        for(auto x:adj1[i])
            addEdge(swapadj,x,i);      
    }
    
    for(int j=0;j<N;j++)
        visited[j]=false;
    
    scc(adj1,swapadj,visited,N);
     
}