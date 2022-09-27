#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a,b,c;
	cin>>a>>b>>c;
	cout<<(a+b+c-'0'*3)*111<<endl;
    return 0;
}
