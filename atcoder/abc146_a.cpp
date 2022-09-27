#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	string s;
	cin>>s;
	int x=s[0]+s[1]+s[2]-64*3;
	switch(x)
	{
		case int('S'+'U'+'N'-64*3):puts("7");break;
		case int('M'+'O'+'N'-64*3):puts("6");break;
		case int('T'+'U'+'E'-64*3):puts("5");break;
		case int('W'+'E'+'D'-64*3):puts("4");break;
		case int('T'+'H'+'U'-64*3):puts("3");break;
		case int('F'+'R'+'I'-64*3):puts("2");break;
		case int('S'+'A'+'T'-64*3):puts("1");break;
	}
}

