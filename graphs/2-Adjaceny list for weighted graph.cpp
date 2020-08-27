#include<bits/stdc++.h> 
using namespace std;


int main() {
    int N=4;
    int v, w; 
    vector<pair<int,int>> adj[N];
    adj[0].push_back({1,5});
    adj[1].push_back({2,7});
    adj[1].push_back({3,6});
    adj[2].push_back({3,5});
    adj[3].push_back({0,2});
    for(int i=0;i<N;i++)
    {
        cout<<"The node "<<i<<" to "<<endl;
        for(auto it = adj[i].begin(); it!=adj[i].end(); it++)
        {
            v = it->first; 
            w = it->second; 
            cout <<"\t Node " << v << " with edge weight ="
                 << w << "\n"; 
        }
            
        cout<<endl;
    }
    
    
}