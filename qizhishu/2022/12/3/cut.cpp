#include<bits/stdc++.h>
using namespace std;
long long W,H,x,y;
int main()
{
	cin>>W>>H>>x>>y;
	printf("%.9f %d\n",W*H/2.0,(W+1)/2==x&&(H+1)/2==y);
	return 0;
}