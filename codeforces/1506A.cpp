#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,x,c,r,a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>n>>m>>x;
  		x--;
 		c=x/n;
		r=x%n;
 		cout<<r*m+c+1<<endl;	
	}
	return 0;
}


