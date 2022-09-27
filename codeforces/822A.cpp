#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,s=1;
    cin>>a>>b;
    for(int j=1;j<=min(a,b);j++)
    {
    	s=s*j;
	}
    cout<<s;
	return 0;
}


