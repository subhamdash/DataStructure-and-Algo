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
void PrintStack(stack<int> s) 
{ 
    if (s.empty())
        return; 
    int x = s.top(); 
    s.pop(); 
    PrintStack(s); 
    cout << x << " "; 
    s.push(x); 
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

void dfs_swap(vector<int> adj[],bool visited[],int start)
{  
    visited[start]=true;
    cout<<start<<" ";
    for(auto x:adj[start]){
        if(!visited[x])
        dfs_swap(adj,visited,x);
    }

}



void scc(vector<int> adj[],vector<int> swapadj[],bool visited[],int N)
{
    stack<int> Stack; 
    for(int i=0;i<N;i++)
    {
        if(!visited[i])
            dfs(adj,visited,i,Stack);
    }
       PrintStack(Stack); 
    cout<<endl;
    
     for(int j=0;j<N;j++)
        visited[j]=false;
    while (Stack.empty() == false) 
    { 
        int v = Stack.top(); 
        Stack.pop(); 
  
        // Print Strongly connected component of the popped vertex 
        if (visited[v] == false) 
        {
            dfs_swap(swapadj,visited,v);
            cout<<endl;
        }
    }
    
    
    

    
}
int main() {
    int N=9;
    vector<int> adj1[N];
    addEdge(adj1, 0, 1); 
    addEdge(adj1, 1, 2); 
    addEdge(adj1, 2, 3); 
    addEdge(adj1, 2, 4); 
    addEdge(adj1, 3, 0); 
    addEdge(adj1, 4, 5); 
    addEdge(adj1, 5, 6); 
    addEdge(adj1, 6, 4);
    addEdge(adj1, 7, 6);
    addEdge(adj1, 7, 8);
    bool visited[N];
    //printv(adj1,N);
    //Swapped edges of the graph
    vector<int> swapadj[N];
    for(int i=0;i<N;i++)
    {
        for(auto x:adj1[i])
            addEdge(swapadj,x,i);      
    }
    //cout<<"After Swapping the graph"<<endl;
    //printv(swapadj,N);
    
    for(int j=0;j<N;j++)
        visited[j]=false;
    
    int start=0;
    //Strongly Connected Components
    scc(adj1,swapadj,visited,N);
    //cout << "Following is Depth First Traversal starting from vertex"<<start<< "\n"; 
    //dfs(adj1,visited,N);        
}