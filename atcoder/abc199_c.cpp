#include<iostream>
using namespace std;int main(){int n,q,t,a,b,f=0;string c;cin>>n>>c>>q;for(;q--;){ cin>>t>>a>>b;a--;b--;if(t-1)f=!f;else swap(c[f?n<=a?a-n:n+a:a],c[f?n<=b?b-n:n+b:b]);}cout<<(f?c.substr(n)+c.substr(0,n):c)<<endl;}
