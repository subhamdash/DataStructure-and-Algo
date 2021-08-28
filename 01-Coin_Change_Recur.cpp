

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pint;
typedef pair<ll, ll> plong;
typedef pair<double, double> pdd;
typedef vector<int> vint;
#define rep(i, a, b) for (int i = a; i < b; i++)

const unsigned int MOD = 1000000007;

int rec(vector<int> v , int value,int j)
{
    if(j<0 || value<0 ) return 0;
    if(value==0) return 1;

    int val;
    val+= rec(v,value,j-1) +rec(v,value-v[j],j);
    return val;

}
void solve()
{
    
    int n;
    cin>>n; 
    vint v(n);
    rep(i,0,n) cin>>v[i];
    int value;
    cin>>value;
    
    
    cout<<rec(v,value,n-1)<<endl;
  
}

int main()
{
//cout<<"Are you working";
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    //cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
