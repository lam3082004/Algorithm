#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define oo 1000000000;
#define ii pair<int, int>
const ll mod = 1000000007;
using namespace std;
typedef pair<int,int> II;
int n,u,v,k,c[11][11],cl[nmax][11],kc[nmax][11];
II q[nmax];
void loang()
{
    for(int i=1; i<(1<<n); i++)
        for(int j=0; j<=n; j++)
    {
        kc[i][j]=oo;
        cl[i][j]=0;
    }
    int l=1, r=0;
    q[++r]=II(0,0); cl[0][0]=1; kc[0][0]=0;
    while(l<=r)
    {
        II t=q[l++];
        u=t.first, k=t.second;
        fo(i,1,n)
        {
            if((u&(1<<(i-1)))==0)
            {
                v=u|(1<<(i-1));
                kc[v][i]=min(kc[v][i],kc[u][k]+c[k][i]);
                if(cl[v][i]==0)
                {
                    cl[v][i]=1;
                    q[++r]=II(v,i);
                }
            }
        }
    }
    int ds=oo;
    for(int i=1; i<=n; i++)
        ds=min(ds,kc[(1<<n)-1][i]);
    cout<<ds;
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
        cin>>n;
    fo(i,1,n)
    fo(j,1,n)   cin>>c[i][j];
    loang();
}