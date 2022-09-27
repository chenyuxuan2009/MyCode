#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	if(n<=3){cout<<-1<<endl;return;}
	int odd[505],even[505],oddsize=0,evensize=0;
	for(int i=1;i<=n;i++)
	{
		if(i&1)odd[oddsize++]=i;
		else even[evensize++]=i;
	}
	for(int i=oddsize-1;i>=0;i--)
	{
		cout<<odd[i]<<" ";
	}
	cout<<4<<" "<<2<<" ";
	for(int i=2;i<evensize;i++)
	{
		cout<<even[i]<<" ";
	}
	cout<<endl;
}
/*
10
1 3 5 7 9
2 4 6 8 10 
9 7 5 3 1 4 2 6 8 10

11
1 3 5 7 9 11
2 4 6 8 10
11 9 7 5 3 1 4 2 6 8 10

4
1 3
2 4
3 1 4 2
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}