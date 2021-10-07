#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define ll long long
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define fn(i,a,b) for(int i=a;i>=b;i==)
#define nmax 100005
using namespace std;
ll k,n,a[30],d[30];
void xuat()
{
   fo(i,1,k) cout<<a[i]<<" ";
    cout<<"\n";
}
void Try(ll i)
{
 fo(j,1,n)
    {
        if(d[j]==0)
        {
            a[i]=j;
            d[j]=1;
            if(i==k)xuat();
            else Try(i+1);
            d[j]=0;
        }
    }
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
    cin>>k>>n;
    Try(1);
}