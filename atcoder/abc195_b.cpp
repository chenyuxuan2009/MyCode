#include<iostream>
int main(){int a,b,w;std::cin>>a>>b>>w;w*=1000;if(w/a==w/b&&w/a*a!=w&&w/b*b!=w)std::cout<<"UNSATISFIABLE";else std::cout<<w/b+(w%b!=0)<<" "<<w/a;}
