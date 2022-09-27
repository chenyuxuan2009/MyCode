#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long al,ar,bl,br;
	cin>>al>>ar>>bl>>br;
	puts((al*2+3LL>br&&br+1LL>=al)||(ar*2LL+3LL>bl&&bl+1LL>=ar)?"YES":"NO");
	return 0;
}
