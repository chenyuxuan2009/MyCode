#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;

/*����ʦ*/
int n,m;
string s[120];
pair<int,int>a[120];
int idx(char x)
{
	if(x=='G')
	{
		return 0;
	}
	else if(x=='C')
	{
		return 1;
	}
	else if (x=='P')
	{
		return 2;
	}
	assert(false);
}
int cmp(char x,char y)
{
	x=idx(x);
	y=idx(y);
	return (x-y+3)%3;
}
void main_bk()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<2*n;i++)
	{
		cin>>s[i];
		a[i].second=i;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<2*n;j+=2)
		{
			if(cmp(s[a[j].second][i],s[a[j + 1].second][i])==2)
			{
				a[j].first--;
			}
			else if(cmp(s[a[j].second][i],s[a[j + 1].second][i])==1)
			{
				a[j+1].first--;
			}
		}
		sort(a,a+2*n);
	}
	for(int i=0;i<2*n;i++)
	{
		cout<<a[i].second+1<<endl;
	}
}
main()
{
	main_bk();
}

