#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
/*字符串转数字，也可以用stoi*/
int tonum(string s)
{
	int sum=0;
	for(int i=0;i<s.size();i++)
	{
		sum=sum*10+s[i]-48;
	}
	return sum;
}
/*高晨瀚的函数*/
int sep(string s,int p)
{
	int l=s.size(),ans,b,e;
	string be,en;
	be=s.substr(0,p+1);
	en=s.substr(p+1,l);
	b=stoi(be);
	e=stoi(en);
	ans=b*e;
	return ans;
}
///*自己*/
void main_me()
{
	cin>>s;
	string st1="",st2="";
	sort(s.begin(),s.end(),greater<int>());
	st1+=s[0],st2+=s[1];
	for(int i=2;i<s.size();i++)
	{
		if(tonum(st1+s[i])*tonum(st2)>tonum(st2+s[i])*tonum(st1))st1+=s[i];
		else st2+=s[i];
	}
	cout<<tonum(st1)*tonum(st2);
}
/*号爸*/
void main_hb()
{
	cin>>s;
	int n=s.size(),ans=0;
	for(int i=1;i<(1<<n)-1;i++)
	{
		string T1,T2;
		for(int j=0;j<n;j++)
		{
			if((i>>j&1)==0)T1+=s[j];
			else T2+=s[j];
		}
		sort(s.begin(),s.end(),greater<int>());
		if(T1[0]!='0'&&T2[0]!='0')
		{
			ans=max(ans,tonum(T1)*tonum(T2));
		}
	}
	cout<<ans;
}
/*高晨瀚*/
void main_gch()
{
	int n;
	cin>>n;
	s=to_string(n);
	int l=s.size();
	int ma=0;
	sort(s.begin(),s.end());
	do
	{
		for(int i=0;i<l-1;i++)
		{
			int t=sep(s,i);
			ma=max(ma,t);
		}
	}
	while(next_permutation(s.begin(),s.end()));
	cout<<ma;
}
/*主程序*/ 
main()
{
	main_gch();
}
