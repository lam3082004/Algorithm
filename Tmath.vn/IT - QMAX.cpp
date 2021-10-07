#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 500005
const ll mod=1e9+7;
using namespace std;
int n , a[nmax+5] , m , q , f[nmax+5] ,u , v , k;
ii st[4*nmax+5];
ii cp(ii x,ii y)
{
    if ( x.fi > y.fi ) return x;
    else if ( x.fi < y.fi ) return y;
    else return {x.fi,x.se+y.se};
}
void build(int id,int i,int j)
{
    if ( i == j )
    {
        st[id] = {a[i],1};
        return;
    }
    int m = (i+j)/2;
    build(2*id,i,m);
    build(2*id+1,m+1,j);
    st[id] = cp(st[2*id] , st[2*id+1]);
}

ii get(int id,int i,int j,int l,int r)
{
    if ( l > j || r < i ) return {-mod,0};
    if ( l <= i && j <= r ) return st[id];
    int m = (i+j)/2;
    return cp(get(2*id,i,m,l,r), get(2*id+1,m+1,j,l,r));
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
    ios::sync_with_stdio(0);
    cin >> n >> m;
    while ( m -- )
    {
        cin >> u >> v >> k;
        a[u] += k; a[v+1] -= k;
    }
    for (int i = 2; i <= n; i++)
        a[i] += a[i-1];
    build(1,1,n);
    cin >> q;
    while ( q -- )
    {
        cin >> u >> v;
        ii gt = get(1,1,n,u,v);
        cout << gt.fi <<" "<< gt.se <<"\n";
    }
}