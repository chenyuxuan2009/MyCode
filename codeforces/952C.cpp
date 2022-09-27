#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,last;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(i==1)
		{
			last=x;
		}
		else
		{
			if(abs(x-last)>1)
			{
				puts("NO");
				return 0;
			}
			last=x;
		}
	}
	puts("YES");
	return 0;
}
