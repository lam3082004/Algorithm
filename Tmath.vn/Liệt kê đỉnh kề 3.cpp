#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define nmax 100006
using namespace std;
vector<int> a[nmax];
ll n , m , u , v;
ll x , y , q;
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
            a[y].push_back(x);
      }

      cin>>q;
      while(q--)
	{
		ll s=0;
		cin>>u;
		cout<<a[u].size()<<' ';
		sort(a[u].begin(), a[u].end());
		for(auto j:a[u])
		{
			cout<<j<<' ';
		}
		cout<<'\n';
	}
}