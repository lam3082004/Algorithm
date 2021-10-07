#include<bits/stdc++.h>
#define ll long long
#define nmax 100006
using namespace std;
vector<int> a[nmax];
int d[nmax];
queue<int> D;

int trace[nmax];

void BFS(int s){
		D.push(s); 	d[s]=1;
		while(D.size()>0)
		{
			int u=D.front();
			D.pop();
			for(int i=0;i<a[u].size();i++)
			{
				int v=a[u][i];
				if(d[v]==0)
				{
					D.push(v); 		d[v]=1;
				}
			}
		}
}

int n , m, s,t;
int main()
{
        ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE

	cin>>n>>m>>s;
	for(int i=1;i<=m;i++)
	{
		int u , v;
		cin>>u>>v;
		a[u].push_back(v);
	}
	BFS(s);
	int ans=0;
	for(int i=1;i<=n;i++)
		if(d[i]==1)			ans++;
		cout<<ans<<endl;
	for(int i=1;i<=n;i++)
		if(d[i]==1) cout<<i<<' ';

}