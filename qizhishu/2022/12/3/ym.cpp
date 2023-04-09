#include<bits/stdc++.h>
using namespace std;
char A,B,C,D;
int a,b,c,d;
bool YYMM,MMYY;
int main()
{
	cin>>A>>B>>C>>D;
	a=A-'0';
	b=B-'0';
	c=C-'0';
	d=D-'0';
	if(0<c*10+d&&c*10+d<=12)//YYMM
	{
		YYMM=1;
	}
	if(0<a*10+b&&a*10+b<=12)//MMYY
	{
		MMYY=1;
	}
	if(YYMM&&MMYY)puts("AMBIGUOUS");
	else if(YYMM)puts("YYMM");
	else if(MMYY)puts("MMYY");
	else puts("NA");
	return 0;
}