#include<iostream>
int main(){int p,a=0,i=2;std::cin>>p;while(p){a+=p%i;p/=i;i++;}std::cout<<a;}
