#include<bits/stdc++.h>
using namespace std;
int f[3020][3020];
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	s1="+"+s1;
	s2="+"+s2;
	int len1=s1.size(),len2=s2.size();
	for(int i=1;i<len1;i++)
	{
		for(int j=1;j<len2;j++)
		{
			if(s1[i]==s2[j])
			{
				f[i][j]=f[i-1][j-1]+1;
			}
			else 
			{
				if(f[i-1][j]>f[i][j-1])
				{
					f[i][j]=f[i-1][j];
				}
				else
				{
					f[i][j]=f[i][j-1];
				}
			}
		}
	}
	int x=len1-1,y=len2-1;
	string ans="";
	while(x>0&&y>0)
	{
		if(s1[x]==s2[y])
		{
			ans+=s1[x];
			x--;
			y--;
		}
		else
		{
			if(f[x-1][y]>f[x][y-1])
			{
				x--;
			}
			else 
			{
				y--;
			}
		}
	}
	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;
	return 0;
}

