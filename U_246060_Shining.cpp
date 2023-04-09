/*
 * @Author: mikey.zhaopeng 
 * @Date: 2023-04-02 11:46:50 
 * @Last Modified by:   mikey.zhaopeng 
 * @Last Modified time: 2023-04-02 11:46:50 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,n;
    int a=30,b=20,c=10;
    cin>>n;
    int m=n;
    while(n>0)
    {
        cnt+=c;
        n-=a+b;
        a+=30;
        b+=10;
        c+=10;
    }
    cout<<cnt<<" "<<50+m/365<<endl;
    return 0;
}