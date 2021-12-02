#include <bits/stdc++.h>
#define lo long long
#define KKH ""
#define fi first
#define se second
#define BIT(mask,k) (((mask)>>(k-1))&1)
#define rs(x,a) memset(x,(a),sizeof x)
#define off(mask,k) ((mask)^(1<<(k-1)))
#define len(a) int(a.size())
#define all(a) a.begin(),a.end()
#define base 1000
using namespace std;
void START()
{
    #ifdef toilagun2004
    freopen("TEST.inp","r",stdin);
    freopen("TEST.out","w",stdout);
    #endif // toilagun2004
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int gh=1e5+6;
int n,a[gh];
bool check(int pos)
{
	vector<int> vt;
	for (int i=pos-2;i<=pos+2;i++)
		vt.push_back(a[i]);
	sort(all(vt));
	return (vt[2]==a[pos]);
}
int main()
{
	START();
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	int kq=0;
	for (int i=3;i<=n-2;i++)
		if (check(i)) kq++;
	cout<<kq;
}