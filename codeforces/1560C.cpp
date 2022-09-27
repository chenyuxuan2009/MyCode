#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a;
		b=int(sqrt(a));
		int c=b*b-a;
		if(c==0)
		{
			cout<<b<<" "<<1<<"\n";
			continue;
		}
		b++;
		c=b*b-a;
		int hang=b,lie=1;
		for(int i=1;i<=c;i++)
		{
			if(i<=b-1)lie++;
			else hang--;
		}
		cout<<hang<<" "<<lie<<"\n";
	}
	return 0;
}



