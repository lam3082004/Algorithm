#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
const int nmax=1005;
ll n,m, a[nmax],b[nmax];
ll x,y,q,u;
string s;
int main()
{
        ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        a[x]++;
        b[y]++;
    }
     cin>>q;
    while(q--){
           cin>>s>>u;
           if(s=="+") cout<<a[u]<<endl;
           else cout<<b[u]<<endl;
    }
}
