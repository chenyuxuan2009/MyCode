#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int r=0,g=0,b=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='r'||s[i]=='g'||s[i]=='b')
		{
			if(s[i]=='r')r++;
			if(s[i]=='g')g++;
			if(s[i]=='b')b++;
		}
		else
		{
			if(s[i]=='R')
			{
				if(r==0){puts("NO");goto f;}
				r--;
			}	
			if(s[i]=='G')
			{
				if(g==0){puts("NO");goto f;}
				g--;
			}
			if(s[i]=='B')
			{
				if(b==0){puts("NO");goto f;}
				b--;
			}
		}
	}
	puts("YES");
	f:;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
