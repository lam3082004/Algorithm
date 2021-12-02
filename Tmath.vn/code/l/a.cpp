#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
#define nmax 10000007
#define ii pair<int,int>
#define se second
#define fi first
const ll mod = 2017;
using namespace std;
ll n, a[5005], b[5005];
ll maxx = -1e18;
void sub1()
{
    fo(i,1,n)
    {
        fo(j,1,n)
        {
            ll s=0;
            fo(k,1,n-min(i,j)+1)
            {
                s+=a[i+k-1]*b[j+k-1];
            }
            maxx=max(maxx,s);
        }
    }
    cout << maxx;
}
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("CONVOL.inp","r",stdin);
    freopen("CONVOL.out","w",stdout);
        #endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n) cin >> b[i];
    if(n <= 500)
        sub1();
    else
        cout << 0;
}
