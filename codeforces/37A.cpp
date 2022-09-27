#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
	int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
	{
        cin>>x;
        a[x]++;
    }
    x=0;
	n=0;
    for(int i=1;i<=1000;i++)		
	{
        if(a[i]!=0)
		{
            n++;
            if(a[i]>x)
			{
				x=a[i];
			}
            
        }
    }
    cout<<x<<" "<<n;
	return 0;
}


