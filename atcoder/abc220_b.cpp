#include<bits/stdc++.h>
using namespace std;
#define ret return
long long f(long long k,string s)
{
	long long sum=0,i=1,j=s.size()-1;
	while(j>=0)
	{
		sum+=i*(s[j]-48);
		j--;
		i*=k;
	}
	return sum;
}
int main()
{
	long long k;
	string a,b;
	cin>>k;
	cin>>a>>b;
	cout<<f(k,a)*f(k,b);
	ret 0;
}



