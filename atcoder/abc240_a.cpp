#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a-1==b||a+1==b||(a==1&&b==10)||(b==10&&a==1))puts("Yes");
	else puts("No");
    return 0;
}
