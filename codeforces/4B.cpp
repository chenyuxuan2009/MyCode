#include<iostream>
using namespace std;
int n,i,s,minn=0,maxx=0;
int a[31],b[31];
int main()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        minn+=a[i];
        maxx+=b[i];
    }
    if(s<=maxx&&s>=minn)
    {
        puts("YES");
        s-=minn;
        for(int i=1;i<=n,s!=0;i++)
        {   
            if(s>b[i]-a[i])
            {
                s-=b[i]-a[i];
                a[i]=b[i];
            }
            else 
            {
                a[i]+=s;
                s=0;
            }
        }
        for(int i=1;i<=n;i++)
        {
			cout<<a[i]<<' ';
		}
    }
    else 
	{
		puts("NO");
	}
    return 0;
}
