#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int k;
	cin>>s>>k;
	sort(s.begin(),s.end());
	while(--k)next_permutation(s.begin(),s.end());
	cout<<s;
}
