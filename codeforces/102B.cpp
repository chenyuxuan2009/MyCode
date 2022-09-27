#include<bits/stdc++.h> 
using namespace std;
unsigned long long ans=1,cnt;
string s;
int con(long long num)
{ 
	long long sum=0;
	while(num!=0)
	{
		sum+=num%10;
		num=num/10; 
	}
	return sum;
}
int main()
{
	cin>>s;
	if(s.size()==1)
	{
		cout<<0<<endl;
		return 0;
	}
	for(int i=0;i<s.size();i++)
	{
		cnt=cnt+s[i]-'0';
	}
	while(cnt>=10)
	{
		ans++;
		cnt=con(cnt); 
	}
	cout<<ans<<endl;
}
