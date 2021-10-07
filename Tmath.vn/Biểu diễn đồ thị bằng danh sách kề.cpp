#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int nmax=1e5+5;
ll n,m;
vector<int> a[nmax];
ll x,y;
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
        a[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        cout<<a[i].size()<<" ";
        sort(a[i].begin(),a[i].end());
        for(auto j:a[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}