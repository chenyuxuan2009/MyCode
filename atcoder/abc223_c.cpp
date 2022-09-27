#include<bits/stdc++.h>
using namespace std;
int n;
double a[100010],b[100010];
double t,s;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		t+=a[i]/b[i];
	}
	t/=2;
	for(int i=1;i<=n;i++)
	{
		if(t>=a[i]/b[i])
		{
			t-=a[i]/b[i];
			s+=a[i];
			
		}else
		{
			s+=t*b[i];
			break;
		}
	}
	cout<<fixed<<setprecision(6)<<s;
	return 0;
}

