#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;

/*×Ô¼º*/
void main_me()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int a[4],sum=0;
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		switch(s[i])
		{
			case '1':sum+=a[0];break;
			case '2':sum+=a[1];break;
			case '3':sum+=a[2];break;
			case '4':sum+=a[3];break;
		}
	}
	cout<<sum;
}
main()
{
	main_me();

}

