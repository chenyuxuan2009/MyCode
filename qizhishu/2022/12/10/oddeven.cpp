#include<bits/stdc++.h>
using namespace std;
int n,q;
int op;
long long x;
long long sum_odd=0,cnt_odd=0;
long long sum_even=0,cnt_even=0;
bool f=1;
int main()
{
	scanf("%d%d",&n,&q);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&x);
		if(x&1)
		{
			sum_odd+=x;
			cnt_odd++;
		}
		else
		{
			sum_even+=x;
			cnt_even++;
		}
	}
	while(q--)
	{
		scanf("%d%lld",&op,&x);
		if(op==0)
		{
			sum_even+=x*cnt_even;
		}
		else
		{
			sum_odd+=x*cnt_odd;
		}
		if(x&1)
		{
			if(op==0)
			{
				sum_odd+=sum_even;
				cnt_odd+=cnt_even;
				cnt_even=sum_even=0;
			}
			else
			{
				sum_even+=sum_odd;
				cnt_even+=cnt_odd;
				cnt_odd=sum_odd=0;
			}
		}
		printf("%lld\n",sum_even+sum_odd);
	}
	return 0;
}
/*
6 7
1 3 2 4 10 48
1 6
0 5
0 4
0 5
1 3
0 12
0 1
*/