#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		sum+=(x&1);
	}
	puts(sum&1?"NO":"YES");
    return 0;
}
