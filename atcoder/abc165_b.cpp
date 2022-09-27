#include<iostream> 
using namespace std; 
int main(void)
{
  long x,y=100,c=0; cin>>x;
  while(y<x){y=y+y/100,c++;} cout<<c<<endl;  
  return 0;
}
