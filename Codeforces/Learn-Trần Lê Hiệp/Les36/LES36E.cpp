#include<bits/stdc++.h>
using namespace std;
#define int long long
inline int read()
{
	int x=0;bool f=0;char c=getchar();
	for(;!isdigit(c);c=getchar())f^=!(c-45);
	for(;isdigit(c);c=getchar())x=x*10+c-48;
	if(f)x=-x;return x;
}
int n=read(),md=read(),bt[10050];
char sa[200500];
signed main()
{
	cin>>sa+1;
	if(md==2||md==5)
	{
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			if((sa[i]-'0')%md==0)
			ans+=i;
		}
		cout<<ans;
		return 0;
	}
	int rt=0,wz=1;
	bt[0]++;
	for(int i=n;i>=1;i--)
	{
		rt=(rt+wz*(sa[i]-'0'))%md;
		bt[rt]++;
		wz=wz*10%md;
	}
	int ans=0;
	for(int i=0;i<=md-1;i++)
	{
		if(bt[i]!=0)ans=(ans+(bt[i]*(bt[i]-1))/2);
	}
	cout<<ans;
}
