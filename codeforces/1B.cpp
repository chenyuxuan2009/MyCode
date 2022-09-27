#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define ll long long
#define for1(i,n,a,b) for(ll (i)=(n);(i)<=(a);(i)+=(b))
#define for2(i,n,a,b) for(ll (i)=(n);(i)>=(a);(i)-=(b))
char s[110],ss[110];
int main()
{
	int t;
	cin>>t;
    while(t--){
        cin>>s;
        int num1=0,num2=0;
        if(s[0]=='R'){
            int i=1;
            while(isdigit(s[i])) num1=num1*10+s[i++]-'0';
            if(i>1&&s[i]=='C'){
                i++;
                while(isdigit(s[i])) num2=num2*10+s[i++]-'0';
                int j=0;
                while(num2>0){
                    ss[++j]=(num2-1)%26+'A';
                    if(num2%26==0) num2=num2/26-1;
                    else num2/=26;
            	}
                for(;j>=1;j--)
                    if('A'<=ss[j]&&ss[j]<='Z')
                    cout<<ss[j];
                printf("%d\n",num1);
                continue;
            }
        }
        int i=0;
        num1=0,num2=0;
        while('A'<=s[i]&&s[i]<='Z') num2=num2*26+s[i++]-'A'+1;
        while(isdigit(s[i])) num1=num1*10+s[i++]-'0';
        printf("R%dC%d\n",num1,num2);
    }
	return 0;
}
