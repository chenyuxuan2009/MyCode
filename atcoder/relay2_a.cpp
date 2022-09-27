#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long k,a,b,z,days=0;
	cin>>k>>a>>b;
	z=a-b;
	if(k<=a)
	{
		puts("1");
		return 0;
	}
	if(z<=0)
	{
		puts("-1");	
		return 0;
	} 
	if((k-a)%z!=0)days++;
	days+=(k-a)/z;
	days=days*2+1;
	cout<<days<<endl;
	return 0;
}

