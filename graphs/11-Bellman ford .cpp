#include<bits/stdc++.h> 
using namespace std;


int main() {
    int N=5;
    int v, w; 
    vector<pair<int,int>> adj[N];

    adj[0].push_back({1,-1});
    adj[0].push_back({2,4});
    adj[1].push_back({2,3});
    adj[1].push_back({3,2});
    adj[1].push_back({4,2});
    adj[3].push_back({2,5});
    adj[3].push_back({1,1});
    adj[4].push_back({3,-3});
    
    vector<int> e(N);
    for(int i=0;i<N;i++)
        e[i]=1e9;
    e[0]=0;
    for (int i = 1; i <N; i++) {
    for (int a = 0; a < N; a++) {
    for (auto b : adj[a]) {
    e[b.first] = min(e[b.first],e[a]+b.second);
    }
    }
    }
    cout<<"Minimum distance from the source are as foolows:"<<endl;
        for(int i=0;i<N;i++)
        cout<<e[i]<<endl;
    
    
    
}
