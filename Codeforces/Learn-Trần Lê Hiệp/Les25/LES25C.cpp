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
const int N = 1e4 + 5;
int t,n,l,r;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>l>>r;
    if(r - l + 1 >= 2019)
        cout<<0;
    else
    {
        ll ans = 1e9;
        fo(i,l,r)
        fo(j,i+1,r)
            ans = min(ans,(1LL*i*j) % 2019);
        cout<<ans;
    }
}
