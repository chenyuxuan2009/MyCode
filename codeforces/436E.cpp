#include <bits/stdc++.h>
using namespace std;
set<pair<int, int> > s;
pair<int, int> r;
long long z;
int n, m, ti;
int a[300020];
int b[300020];
int p[300020];
pair<int, int> t[300020];
int main()
{
	scanf("%d%d", &n, &m);
	s.insert(make_pair(1000000007, -1));
	r = make_pair(0, -1);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i], &b[i]);
		s.insert(make_pair(a[i], i));
		t[i] = make_pair(b[i], i);
	}
	sort(t, t + n);
	for (int i = 0; i < m; i++)
	{
		while (ti < n && p[t[ti].second] > 0)
		{
			ti++;
		}
		if (ti == n || s.begin()->first < t[ti].first - r.first)
		{
			z += s.begin()->first;
			int x = s.begin()->second;
			s.erase(s.begin());
			p[x]++;
			if (p[x] == 1)
			{
				s.insert(make_pair(b[x] - a[x], x));
				r = make_pair(a[x], x);
			}
			else 
			{
				r = make_pair(b[x] - a[x], x);
			}
		}
		else 
		{
			z += t[ti].first - r.first;
			int x = t[ti].second;
			int y = r.second;
			p[x] = 2;
			s.erase(make_pair(a[x], x));
			r = make_pair(0, -1);
			p[y]--;
			if (p[y] == 0)
			{
				s.erase(make_pair(b[y] - a[y], y));
				s.insert(make_pair(a[y], y));
			}
			else
			{
				s.insert(make_pair(b[y] - a[y], y));
			}
		}
	}
	printf("%lld\n", z);
	for (int i = 0; i < n; i++)
	{
		printf("%d", p[i]);
	}
	printf("\n");
	return 0;
}