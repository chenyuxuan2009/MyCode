#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,d;
	bool good=true;
	string s;
	cin>>a;
	for(int i1=1;i1<=a;i1++)
	{
		cin>>n;
		cin>>s;
		good=true;
		for(int i=0;i<(n-1-i);i++)
		{
			d=abs(s[i]-s[n-1-i]);
			if(d!=0&&d!=2)
			{
				good=false;
				break;
			}
		}
		cout<<(good?"YES\n":"NO\n");
	}
	return 0;
}


