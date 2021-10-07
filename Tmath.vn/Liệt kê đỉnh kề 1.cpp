
#include<bits/stdc++.h>
using namespace std;
long long n,m,u,v;
vector<long long> k[100005];
int i,t;
int main()
{
    ios::sync_with_stdio();
    cin.tie();cout.tie();
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        k[u].push_back(v);
    }
    cin>>t;
    while(t--)
    {
        cin>>i;
        cout<<k[i].size()<<" ";
        sort(k[i].begin(),k[i].end());
        for(auto j:k[i])
        {
            cout<<j<<" ";

        }
        cout<<endl;
    }
}