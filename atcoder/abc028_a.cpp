#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x<60)puts("Bad");
	else if(x<90)puts("Good");
	else if(x<100)puts("Great");
	else puts("Perfect");
    return 0;
}
