#include <iostream>
#include <cstdio>
#include <deque>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long ll;
queue<int> q;
priority_queue <int,vector<int>,greater<int> > pq;
int main()
{
	int Q,op,x;
	scanf("%d",&Q);
	while(Q--)
	{
		scanf("%d",&op);
		if(op==1)
		{
			scanf("%d",&x);
			q.push(x);
		}
		else if(op==2)
		{
			if(!pq.empty())
            {
                printf("%d\n", pq.top());
                pq.pop();
            }
            else
            {
                printf("%d\n", q.front());
                q.pop();
            }
		}
		else
		{
			while(!q.empty())
			{
				pq.push(q.front());
				q.pop();
			}
		}
	}
	return 0;
}
