#include<bits/stdc++.h>
using namespace std;
long long r[10000],d[10000],b[10000];
string s[10000];
int main()
{
	int n,f;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>r[i]>>b[i]>>d[i];
        f=max(r[i],b[i]);
        r[i]=min(r[i],b[i]);
        b[i]=f;
        if(r[i]*(d[i]+1)>=b[i]) 
		{
			s[i]="YES";
		}
        else 
		{
			s[i]="NO";
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<s[i]<<endl;
	}
	return 0;
}


