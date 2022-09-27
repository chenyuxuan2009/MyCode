#include<bits/stdc++.h>
using namespace std;
int n,op,s;
double l[3000],r[3000];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>op>>l[i]>>r[i];
		if(op==2||op==4)r[i]-=0.5;
		if(op==3||op==4)l[i]+=0.5;
		for(int j=1;j<i;j++)
			if(l[i]<=r[j]&&r[i]>=l[j])
				s++;
	}
	cout<<s;
	return 0;
}
