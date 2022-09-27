#include<bits/stdc++.h>
using namespace std;
char a[100][100];
int n;
string U(int i,int j)
{
	int x=n;
	string ret="";
	for(;x>=1;i--,x--)
	{
		if(i==0)i=n;
		ret+=a[i][j];
	}
	return ret;
}
string D(int i,int j)
{
	int x=n;
	string ret="";
	for(;x>=1;i++,x--)
	{
		if(i==n+1)i=1;
		ret+=a[i][j];
	}
	return ret;
}
string L(int i,int j)
{
	int x=n;
	string ret="";
	for(;x>=1;j--,x--)
	{
		if(j==0)j=n;
		ret+=a[i][j];
	}
	return ret;
}
string R(int i,int j)
{
	int x=n;
	string ret="";
	for(;x>=1;j++,x--)
	{
		if(j==n+1)j=1; 
		ret+=a[i][j];
	}
	return ret;
}
string UL(int i,int j)
{
	int x=n;
	string ret="";
	for(;x>=1;i--,j--,x--)
	{
		if(i==0)i=n;
		if(j==0)j=n;
		ret+=a[i][j];
	}
	return ret;
}
string UR(int i,int j)
{
	int x=n;
	string ret="";
	for(;x>=1;i--,j++,x--)
	{
		if(i==0)i=n;
		if(j==n+1)j=1;
		ret+=a[i][j];
	}
	return ret;
}
string DL(int i,int j)
{
	int x=n;
	string ret="";
	for(;x>=1;i++,j--,x--)
	{
		if(i==n+1)i=1;
		if(j==0)j=n;
		ret+=a[i][j];
	}
	return ret;
}
string DR(int i,int j)
{
	int x=n;
	string ret="";
	for(;x>=1;i++,j++,x--)
	{
		if(i==n+1)i=1;
		if(j==n+1)j=1;
		ret+=a[i][j];
	}
	return ret;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	long long ans=-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			ans=max(ans,stoll(U(i,j)));
			ans=max(ans,stoll(D(i,j)));
			ans=max(ans,stoll(L(i,j)));
			ans=max(ans,stoll(R(i,j)));
			ans=max(ans,stoll(UL(i,j)));
			ans=max(ans,stoll(UR(i,j)));
			ans=max(ans,stoll(DL(i,j)));
			ans=max(ans,stoll(DR(i,j)));
		}
	}
	cout<<ans<<endl;
	return 0;
}