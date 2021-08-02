#include<bits/stdc++.h> 
using namespace std;


int main() {
    int N=4;
    int v, w; 
    vector<pair<int,int>> adj;
    adj.push_back({1,2});
    adj.push_back({2,3});
    adj.push_back({2,4});
    adj.push_back({3,4});
    adj.push_back({4,1});
    for(auto it = adj.begin(); it!=adj.end(); it++)
    {
            v = it->first; 
            w = it->second; 
            cout <<"\t Node " << v << "->"
                 << w << "\n"; 
    }

    
    
}