#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;

/*×Ô¼º*/
bool f(char a,char b)
{
	if(((a-48)*10+b-48)%25==0)return 1;
	else return 0;
}
void main_me()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int minn=INT_MAX,now=0; 
		for(int i=0;i<s.size();i++)
		{
			now=0;
			for(int j=i+1;j<s.size();j++)
			{
				if(f(s[i],s[j]))
				{
					now=s.size()-1-j+abs(i-j+1);
					minn=min(now,minn); 
				}
			}
		}
		cout<<minn<<endl;
		 
	}
	
}
main()
{
	main_me();

}

