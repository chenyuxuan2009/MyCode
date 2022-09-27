#include<bits/stdc++.h>
using namespace std;
int s1[1005][150];
int main()
{
	int n,a;
	string s;
	bool f=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cin>>s;
		if(a==(1||2))
		{
			cout<<"YES"<<endl;
			continue;
		}
		for(int j=0;j<s.size();j++)
		{
			if(s[j]!=s[j-1])
			{
				s1[i][s[j]]++;
				if(s1[i][s[j]]>=2)
				{
					cout<<"NO"<<endl;
					f=1;
					break;
				}
			} 
		}
		if(f==1)
		{
			f=0;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}


