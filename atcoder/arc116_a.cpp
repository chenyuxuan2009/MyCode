#include<bits/stdc++.h>
main()
{
	int t; 
	std::cin>>t;
	while(t--) 
	{
		long long n; 
		std::cin>>n;
		puts(n%2?"Odd":n%4?"Same":"Even");
	}
}

