#include<cstdio>
#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;
string pas,now;
queue <long long> q;
int ct,n,i,j;
int ans[1000],num[1000],l[1000][1000],cnt[1000];
bool v[1000];
int main()
{
	scanf("%d",&n);
	cin>>pas;
	for(i=2;i<=n;i++)
	{
		cin>>now;
		int len=min(pas.length(),now.length());
		for(j=0;j<=len;j++)
		{
			if(j==len)
			{
				if(pas.length()>now.length())
				{
					printf("Impossible");
					return 0;
				}
				break;
			}
			if(pas[j]!=now[j])
			{
				int up=pas[j]-'a';
				int down=now[j]-'a'; 
				l[up][++cnt[up]]=down;
				num[down]++;
				break;	
			}		
		}
		pas=now;
	}
	for(i=0;i<=25;i++)
	{
		if(num[i]==0)
		{
			q.push(i);
		}
	}
	while(!q.empty())
	{
		int head=q.front();
		ans[ct]=head;
		ct++;
		q.pop();
		for(i=1;i<=cnt[head];i++)
		{
			num[l[head][i]]--;
			if(num[l[head][i]]==0)
			{
				q.push(l[head][i]);
			}
		}		
	}
	if(ct==26)
	{
		for(i=0;i<=25;i++)
		{
			printf("%c",ans[i]+'a');
		}
	}
	else
	{
		printf("Impossible");
	}
}
