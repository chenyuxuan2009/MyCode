#include<bits/stdc++.h>
using namespace std;
int cnt(int y,int m,int d)
{
	if (m<3)
		y--,m+=12;
    return 365*y+y/4-y/100+y/400+(153*m-457)/5+d-306;
}
int main()
{
	int a,b,c,t1,t2;
	scanf("%d:%d:%d",&a,&b,&c);
	t1=cnt(a,b,c);
	scanf("%d:%d:%d",&a,&b,&c);
	t2=cnt(a,b,c);
	cout<<abs(t1-t2);
	return 0;
}

