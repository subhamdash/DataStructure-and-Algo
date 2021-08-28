

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

int rec(vector<int> v ,int i, int j,vector<vector<int>> dp)
{
    if(j==0)
    {dp[i][j]=1;
     return dp[i][j];} 
    if(i==0 || j<0 ) return 0;
   
    if(dp[i][j]!=-1) return dp[i][j];
    
    if(v[i-1]<=j)
        dp[i][j]= rec(v,i-1,j,dp) +rec(v,i,j-v[i-1],dp);
    else
        dp[i][j]=rec(v,i-1,j,dp);
    return dp[i][j];

}
void solve()
{
    
    int n;
    cin>>n; 
    vint v(n);
    rep(i,0,n) cin>>v[i];
    int value;

    cin>>value;
    vector<vector<int>> dp(n+1,vector<int>(value+1,-1));
    
    
    cout<<rec(v,n,value,dp)<<endl;
  
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
