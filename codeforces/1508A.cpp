#include<bits/stdc++.h>
using namespace std;
int t,n;
string a,b,c;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b>>c;
		int i=0,j=0,k=0,m=0;
		while(i!=2*n&&j!=2*n&&k!=2*n)
		{
			int x=(int)(a[i]=='0')+(b[j]=='0')+(c[k]=='0');
			char y=x>=2?'0':'1';
			cout<<y;
			i+=a[i]==y;
			j+=b[j]==y;
			k+=c[k]==y;
			++m;
		}
		m-=n;
		if(i!=2*n&&i>=m)
		{
			cout<<a.substr(i)<<endl;
		}
		else if(j!=2*n&&j>=m)
		{
			cout<<b.substr(j)<<endl;
		}
		else if(k!=2*n&&k>=m)
		{
			cout<<c.substr(k)<<endl;
		}
		else 
		{
			cout<<endl;
		}
		
	} 
	return 0;
}


