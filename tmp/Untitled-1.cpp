#include<bits/stdc++.h>
using namespace std;
priority_queue<long long>q;
long long cnt;
int main()
{
    q.push(1);q.push(2);q.push(3);q.push(5);
    while(cnt<=1500)
    {
        long long x=q.top();
        q.pop();
        cnt++;
        if(x>=2)q.push(x*2);if(x>=3)q.push(x*3);if(x>=5)q.push(x*5);
    }
    cout<<q.top()<<endl;
    return 0;
}