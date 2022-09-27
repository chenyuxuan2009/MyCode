#include<iostream>
using namespace std;
int k,a,b,v,ans,num;
int main()
{
    cin>>k>>a>>b>>v;
    while(1)
    {
        if(a<=0)break;
        else
        {
            num=1;
            while(b>0)
                if(num<k) num++,b--;
                else break;
            a-=num*v;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
