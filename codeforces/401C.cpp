#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	if(n>m+1||m>n*2+2)cout<<-1;//如果超出:-1;
	else{//没超出：
		if(n>m)
		{
			n>m;//输出m个01后输出0；
			for(int i=1;i<n;i++)cout<<"01";
			cout<<0;
		}
		else{//2.m>2n;输出m-2n个1；输出n个011；3.2n>m>=n;输出m-n个011；输出2n-m个01；
			if(m>n*2){
            for(int i=0;i<m-n*2;i++)
            	cout<<1;
            m=2*n;
        }
			for(int i=0;i<m-n;i++)cout<<"011";
			for(int i=0;i<n*2-m;i++)cout<<"01";
		}
	}
	return 0;
}
