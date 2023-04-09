#include<algorithm>
#include<iostream>
#include<string.h>
#include<queue>
using namespace std;
bool f[30][30];
int in[30],out[30];
bool vis[30];
int n,m;
string ans;
bool TC_check()
{
    for(int k=0;k<30;k++)for(int i=0;i<30;i++)for(int j=0;j<30;j++)if(f[i][k]&&f[k][j])f[i][j]=1;
    // for(int i=0;i<30;i++)for(int j=0;j<30;j++)cout<<f[i][j]<<" \n"[j==29];
    for(int i=0;i<30;i++)if(f[i][i]){return 0;}
    return 1;
}
bool deg()
{
    memset(in,0,sizeof(in));
    memset(out,0,sizeof(out));
    for(int i=0;i<30;i++)for(int j=0;j<30;j++)if(f[i][j])in[j]++,out[i]++;
    for(int i=1;i<=n;i++)if(in[i]+out[i]!=n-1)return 0;
    return 1;
}
void topo()
{
    queue<int>q;
	for(int i=1;i<=n;i++)if(!in[i]){q.push(i);break;}
	memset(vis,0,sizeof(vis));
	while(!q.empty())
	{
		int u=q.front();
        q.pop();
		vis[u]=1;
		ans+=char(u+'A'-1);
		for(int i=1;i<=n;i++)
		{
			if(!vis[i]&&f[u][i])in[i]--;
			if((i^u)&&!vis[i]&&!in[i])q.push(i);
		}
	}
}
int main()
{
    while(cin>>n>>m)
    {
        if(!n&&!m)break;
        memset(f,0,sizeof(f));ans="";
        int YES_ans=0,NO_ans=0;
        for(int _=1;_<=m;_++)
        {
            string s;
            cin>>s;
            if(YES_ans||NO_ans)continue;
            f[s[0]-'A'+1][s[2]-'A'+1]=1;
            if(!TC_check()){NO_ans=_;}
            else if(deg()){topo();YES_ans=_;}
        }
        if(YES_ans)printf("Sorted sequence determined after %d relations: %s.\n",YES_ans,ans.data());
        else if(NO_ans)printf("Inconsistency found after %d relations.\n",NO_ans);
        else printf("Sorted sequence cannot be determined.\n");
    }
    return 0;
}