#include<bits/stdc++.h> 
using namespace std;


int main() {
    int N=4;
    vector<int> adj[N];
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);
    adj[3].push_back(1);
    for(int i=0;i<N;i++)
    {
        cout<<"The node "<<endl<<i;
        for(auto x:adj[i])
            cout<<"->"<<x;
        cout<<endl;
    }
    
    
}