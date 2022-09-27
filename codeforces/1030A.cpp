#include<bits/stdc++.h>
using namespace std;
char a[105];
int main()
{
	int n; 
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]; 
		if(a[i]=='1')
		{
			cout<<"HARD";
			return 0;	
		}
	}
	cout<<"EASY";
	return 0;
}


