#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define fo(i,a,b) for(ll i=a;i<=b;i++)
#define fod(i,a,b) for(ll i=b;i>=a;i--)
using namespace std;
ll m,n,d[105][105],f[1005],k=0;
char a[105][105];
ll hang[]={-1,0,1,0};
ll cot[]={0,1,0,-1};
void DFS(ll u,ll v,ll sl)
{
    d[u][v]=1;
    fo(i,0,4)
    {
        ll ha=u+hang[i],co=v+cot[i];
        if(ha>0 && ha<=m && co>0 && co<= n)
        {
            if(a[ha][co]!= '.' && d[ha][co]==0)
            {
                f[sl]++;
                DFS(ha,co,sl);
            }
        }
    }
}
int main()
{
          #ifndef ONLINE_JUDGE
    freopen("l.inp","r",stdin);
    freopen("l.out","w",stdout);
        #endif // ONLINE_JUDGE
     ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>m>>n;
    fo(i,1,m)
        fo(j,1,n)
    {
        cin>>a[i][j];
        if(a[i][j]=='.')
        d[i][j]=1;
    }
    fo(i,1,m)
    {
        fo(j,1,n)
        {
            if(d[i][j]==0)
            {
                k++;
                f[k]=1;
                DFS(i,j,k);
            }
        }
    }
    cout<<k<<"\n";
    sort(f+1,f+k+1);
    cout<<f[k]<<" ";
    int dem=0;
    fod(i,1,k)
        if(f[i]==f[k]) dem++;
    else break;
    cout<<dem;
}