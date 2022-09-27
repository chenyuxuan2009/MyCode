#include<bits/stdc++.h>
using namespace std;
#define ret return
int a,b,c;
int main()
{
	cin>>a>>b>>c; 
	cout<<(a%b?(a/b+1)*c:a/b*c);
	ret 0;
}



