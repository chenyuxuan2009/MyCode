#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;

/*×Ô¼º*/
void main_me()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	cout<<min(min(k*l/nl,d*c),p/np)/n; 
}
main()
{
	main_me();

}

