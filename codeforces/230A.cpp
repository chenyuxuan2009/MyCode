#include<bits/stdc++.h>
using namespace std;
int x[1005],y[1005];
int main()
{
	int n,s;
	cin>>s>>n;
	for(int i=1;i<=n;i++)
	{
        cin>>x[i]>>y[i];
	}
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n-i;j++)
		{
            if(x[j]>x[j+1])
			{
                swap(x[j],x[j+1]);
                swap(y[j],y[j+1]);
            }
        }
	}
	for(int i=1;i<=n;i++)
	{
        if(x[i]<s)
        {
        	s+=y[i];
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}


