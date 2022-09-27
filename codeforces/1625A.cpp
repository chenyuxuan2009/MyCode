#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long n,k,sum=0;
	string ans="";
	cin>>n>>k;
	long long cnt[k+1];
	memset(cnt,0,sizeof(cnt));
	for(long long i=1;i<=n;i++)
	{
		long long x;
		cin>>x;
		string s="";
		for(;x>0;s=char(x%2+'0')+s,x/=2);
		for(int i=s.size();i<k;i++,s="0"+s);
		reverse(s.begin(),s.end());
		for(long long j=0;j<k;s[j]=='0'?cnt[j++]+=1LL:cnt[j++]-=1LL);
	}
	for(int j=0;j<k;ans+=(cnt[j++]<0LL?'1':'0'));
	long long z=1LL;
	for(int i=0;i<k;sum+=(ans[i++]=='1'?z:0LL),z*=2LL);
	cout<<sum<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}	
