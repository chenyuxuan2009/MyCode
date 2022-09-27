#include<bits/stdc++.h>
using namespace std;
int s[10];
int main()
{
	int a,b,c; 
	cin>>a>>b>>c;
	s[1]=a+b+c;
	s[2]=a+b*c;
	s[3]=a*b+c;
	s[4]=a*b*c;
	s[5]=(a+b)*c;
	s[6]=a*(b+c);
	sort(s+1,s+7,greater<int>());
	cout<<s[1]; 
	return 0;
}


