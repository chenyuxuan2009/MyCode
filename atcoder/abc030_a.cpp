#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b*c<d*a)puts("AOKI");
	if(b*c==d*a)puts("DRAW");
	if(b*c>d*a)puts("TAKAHASHI");
    return 0;
}
