#include<bits/stdc++.h>
using namespace std;
long long d[3],c,n,m;
int main()
{
	cin>>n;
	for(m=n;m>0;m/=10,c++)d[m%10%3]++;
	if(n%3==0)cout<<0;
	else if(d[n%3]>0)cout<<(c!=1?1:-1);
	else cout<<(c!=2?2:-1);
}
