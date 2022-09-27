#include<bits/stdc++.h>
using namespace std;
long n,x;
int main(){
	cin>>n;
	while(stol(to_string(x)+to_string(x))<=n)x++;
	cout<<x-1<<"\n";
}
