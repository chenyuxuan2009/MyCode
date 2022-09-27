#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a%4==0||a%7==0||a%47==0||a%74==0||a%447==0||a%474==0||a%477==0)
	{
		cout<<"YES"; 
		return 0;
	} 
	while(a>0)
	{
		if(a%10!=4||a%10!=7)
		{
			cout<<"NO";
			return 0;
		}
		a/=10;
	}
	cout<<"YES";
	return 0;
}


