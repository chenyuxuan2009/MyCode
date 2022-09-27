#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,g,b,f;
	cin>>r>>g>>b;
	f=min(min(r,g),b);
	r=r-f;
	g=g-f;
	b=b-f;
	if(r%3+g%3+b%3==4&&f!=0)
	{
		f++;
	}
	cout<<f+r/3+g/3+b/3;
	return 0;
}


