#include <bits/stdc++.h>
#define ll long long
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define nmax 200005
#define ii pair<ll,ll>
#define fi first
#define se second
using namespace std;
ll n,a[nmax],l[nmax],r[nmax],maxx=0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    fo(i,1,n) cin>>a[i];
    fo(i,1,n)
    {
        l[i]=i-1;
        while(l[i]>0 && a[l[i]]>=a[i])
            l[i]=l[l[i]];
    }
    for(int i=n;i>=0;i--)
    {
        r[i]=i+1;
        while(r[i]<=n && a[r[i]]>=a[i])
            r[i]=r[r[i]];
    }
//        fo(i,1,n)
//            cout << l[i]<<' ';
//        cout<<'\n';
//        fo(i,1,n)
//            cout << r[i]<<' ';
//        cout<<'\n';
//    cout<<maxx;
    fo(i,1,n)
    {
        maxx += 1LL * (r[i] - i) * (i - l[i]) * a[i];
    }
    cout<<maxx;
}
