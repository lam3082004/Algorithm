#include<bits/stdc++.h>
#define ll long long
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define nmax 100006
using namespace std;
int m,n,ans=0,u,v;
int a[1006][1006];
bool ed(int i, int j)
{
    return (i>=0 && i<n && j>=0 && j<m && a[i][j]==1);
}
void dfs(int i, int j){
    a[i][j]=0;
    if (ed(i-1,j)) {dfs(i-1,j);ans++; }
    if (ed(i+1,j)) {dfs(i+1,j);ans++ ;}
    if (ed(i,j-1)) {dfs(i,j-1);ans++ ;}
    if (ed(i,j+1)) {dfs(i,j+1);ans++ ;}
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

    cin >> n >> m >> u >> v;
    for (int i=0;i<n;++i)
        for (int j=0;j<m;++j) cin >> a[i][j];
    if (a[u-1][v-1]==0){
        cout << 0;
        return 0;
    }
    dfs(u-1,v-1);
    cout << ans+1;
}