#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		string x=to_string(a),y=to_string(c);
		if(x.size()+b>y.size()+d)
		{
			puts(">");
		}
		else if(x.size()+b<y.size()+d)
		{
			puts("<");
		}
		else if(x.size()+b==y.size()+d)
		{
			int z=min(b,d);
			b-=z;
			d-=z;
			for(int i=0;i<x.size()+b;i++)
			{
				char l=(i<x.size()?x[i]:'0'),r=(i<y.size()?y[i]:'0');
				if(l>r)
				{
					puts(">");
					goto gt;
				}
				if(l<r)
				{
					puts("<");
					goto gt;
				}
			}
			puts("=");
		}
		gt:;
	}
}
