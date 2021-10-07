#include <bits/stdc++.h>
#define ll long long
#define fo(i,a,b) for(int i=a;i<=b;++i)
#define fod(i,a,b) for(int i=a;i>=b;--i)
#define ii pair<int,int>
#define fi first
#define se second
#define oo 1e18
#define bit(x,i) (((x)>>(i))&1)
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;
int t,n;
ii a[N],c[N];
priority_queue<ii>pq;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("new.inp","r",stdin);
        freopen("new.out","w",stdout);
    #endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        fo(i,1,n)
        {
            cin>>a[i].fi;
            a[i].se = i;
        }
        while(!pq.empty())
            pq.pop();
        fo(i,1,n)
        if(a[i].fi > 0)
            pq.push(a[i]);
        int res = 0;
        while(pq.size() > 1)
        {
            ii u = pq.top();
            pq.pop();
            ii v = pq.top();
            pq.pop();
            c[++res] = {v.se,u.se};
            u.fi--;
            v.fi--;
            if(u.fi > 0)
                pq.push({u.fi,u.se});
            if(v.fi > 0)
                pq.push({v.fi,v.se});
        }
        cout<<res<<'\n';
        fo(i,1,res)
            cout<<c[i].fi<<' '<<c[i].se<<'\n';
    }
}