#include<iostream>
using namespace std;
long long a,sum;
int main()
{
	cin>>a;
	for(long long i=1000;i<=a;i=i*1000)
		sum+=a-i+1;
	cout<<sum<<endl;
}
