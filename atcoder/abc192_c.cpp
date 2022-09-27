#include<bits/stdc++.h>
using namespace std;
string s,a;int k;
main(){
	cin>>s>>k;
	for(int i=0;i<k;i++){
		sort(s.begin(),s.end());
		a=s;
		reverse(a.begin(),a.end());
		s=to_string(stoi(a)-stoi(s));
	}
	cout<<s;
}
