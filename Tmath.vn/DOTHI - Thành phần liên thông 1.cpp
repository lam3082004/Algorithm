#include<bits/stdc++.h>
#define ll long long
#define nmax 100006
using namespace std;
vector<int> a[nmax];
bool qc[nmax];
int d[nmax];
int n , m ;
void DFS(int u)
{
	qc[u]=true;
	for(int i=0;i<a[u].size();i++)
		if(!qc[a[u][i]])
		DFS(a[u][i]);
}

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
		int u , v;
		cin>>u>>v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(!qc[i])
		{
			dem++;
			DFS(i);
		}
	}
	cout<<dem;
}