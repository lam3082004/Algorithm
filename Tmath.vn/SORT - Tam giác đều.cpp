#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define nmax 100005
const ll mod=1e9+7;
using namespace std;
ll n,a[nmax],d=1,s=0;
int main()
{
      #ifndef ONLINE_JUDGE
    freopen("l.inp","r",stdin);
    freopen("l.out","w",stdout);
        #endif // ONLINE_JUDGE
    ios::sync_with_stdio();
    cin.tie(0);cout.tie(0);
    cin>>n;
    fo(i,1,n)
    cin>>a[i];
    sort(a+1,a+1+n);
    fo(i,1,n)
    {
    	if(a[i]>0)
    	{
	        if(a[i]==a[i+1])
		        {
		            d++;
		        }
	        else
		        {
		            s+=d*(d-1)*(d-2)/6;
		            d=1;
		        }
        }
    }
    cout<<s;
}