#include <bits/stdc++.h>
using namespace std;
long long n,a[1005][1005],m,u,v,res=0;
long long t,x,y;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
    #endif // ONLINE_JUDGE
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
    }
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=n;j++)
//            cout<<a[i][j]<<" ";
//        cout<<endl;
//    }
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(a[x][y]==1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}