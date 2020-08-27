#include<bits/stdc++.h> 
using namespace std;


int main() {
    int N=4;
    int v,w,z; 
    vector<tuple<int,int,int>> adj;
    adj.push_back(make_tuple(1,2,5));
    adj.push_back(make_tuple(2,3,7));
    adj.push_back(make_tuple(2,4,6));
    adj.push_back(make_tuple(3,4,5));
    adj.push_back(make_tuple(4,1,2));
    for(int i=0; i<adj.size(); i++)
    {       
            v = get<0>(adj[i]); 
            w = get<1>(adj[i]);
            z=get<2>(adj[i]);
        
            cout <<"\t Node " << v << "->"
                 << w <<" with weight "<<z <<"\n"; 
    }
    
    
}