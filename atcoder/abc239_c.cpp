#include<bits/stdc++.h>
using namespace std;
int main()
{
	#define int long long
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int x=x1-x2;
	int y=y1-y2;
	int ans=x*x+y*y;
	if(ans==2||ans==4||ans==10||ans==18||ans==20||ans==16)puts("Yes");
	else puts("No");
	return 0;
}
