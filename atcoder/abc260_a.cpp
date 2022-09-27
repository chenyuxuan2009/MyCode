#include<bits/stdc++.h>
using namespace std;
int a['z'+1];
int main()
{
	string s;
	cin>>s;
	a[s[0]]++;
	a[s[1]]++;
	a[s[2]]++;
	for(int i='a';i<='z';i++)
	{
		if(a[i]==1)
		{
			cout<<char(i)<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}