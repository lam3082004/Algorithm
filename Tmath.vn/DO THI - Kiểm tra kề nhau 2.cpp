#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long n,m,u,v;
vector<long long> k[100005];
ll t,x,y;
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
        k[u].push_back(v);
    }
//    for(int i=1;i<=n;i++)
//    {
//        cout<<k[i].size()<<" ";
//        sort(k[i].begin(),k[i].end());
//        for(auto j:k[i])
//        {
//            cout<<j<<" ";
//        }
//        cout<<endl;
//    }
    cin>>t;
    while(t--)
    {
        ll s=0;
        cin>>x>>y;
        if(k[x].size()==y)
        {
            s=1;
        }
        sort(k[x].begin(),k[x].end());
        for(auto j:k[x])
        {
            if(j==y)
            {
                s=1;
                break;
            }
        }
        if(s==1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}