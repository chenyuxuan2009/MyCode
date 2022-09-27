#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,s1=1,s2=1,s3=1;
	cin>>a>>b>>c;
	s1+=b>a;
	s1+=c>a;
	s2+=a>b;
	s2+=c>b;
	s3+=b>c;
	s3+=a>c;
	cout<<s1<<endl<<s2<<endl<<s3<<endl;
    return 0;
}
