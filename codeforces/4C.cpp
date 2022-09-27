#include<bits/stdc++.h>
using namespace std;
string s[100005],s1[100005];
int a[100005];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		s1[i]=s[i];
		for(int j=1;j<i;j++)
		{
			if(s1[j]==s[i])
			{
				a[j]++;
				cout<<s[i]<<a[j]<<endl;	
				goto f;
			}
		}
		cout<<"OK"<<endl;
		f:;
	}
	return 0;
}


