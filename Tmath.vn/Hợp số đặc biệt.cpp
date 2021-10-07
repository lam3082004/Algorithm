#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 10000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
bool NT[nmax];
void sang()
{
    fo(i,0,nmax) NT[i]=true;
    NT[0]=false;
    NT[1]=false;
    for(int i=2;i*i<=nmax;i++)
    {
        if(NT[i]==true)
        {
            for(int j=i*i;j<=nmax;j+=i)
                NT[j]=false;
        }
    }
}
ll nt(ll x)
{
    if(x<=1) return false;
    fo(i,2,sqrt(x))
    {
        if(x%i==0) return false;
    }
    return true;
}
int n,dem=0,t;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll s=1;
        for(int i = 2;i *i<= n;i++)
            if(n % i == 0)
            {
                s = i;
                break;
            }
		if(s == 1)
            cout << "No" << '\n';
		else
		{
			if(nt(s) && nt(n / s))
			    cout << "Yes" << '\n';
			else
			    cout << "No" << '\n';
		}
	}
}