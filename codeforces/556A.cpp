#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,b=0,c=0;
	string a;
	cin>>s;
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
    	if(a[i]== '0')
		{
			b=b+1;
    	}
    	else
		{
			c=c+1;
		}
	}
	cout<<abs(b-c);
	return 0;
}


