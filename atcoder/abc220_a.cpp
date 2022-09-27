#include<bits/stdc++.h>
using namespace std;
#define ret return
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=a;i<=b;i++)
	{
		if(i%c==0)
		{
			cout<<i;
			ret 0;
		}
	}
	cout<<-1;
	ret 0;
}



