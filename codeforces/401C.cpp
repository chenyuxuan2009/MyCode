#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	if(n>m+1||m>n*2+2)cout<<-1;//�������:-1;
	else{//û������
		if(n>m)
		{
			n>m;//���m��01�����0��
			for(int i=1;i<n;i++)cout<<"01";
			cout<<0;
		}
		else{//2.m>2n;���m-2n��1�����n��011��3.2n>m>=n;���m-n��011�����2n-m��01��
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
