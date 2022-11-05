#include <iostream>

using namespace std;

main() {

float a,b,c,s,d,n,g;
//calculation of s//
cout<<"enter a number:";
cin>> a ;
cout<<"enter a number:";
cin>>b ;
cout<<"enter a number:";
cin>>c;
cout<<"s=(x-y)*(x+z)/((x+y+z)*(x+y+z))+1=";
d=a-b;
n=a+c;
g=a+b+c;
s=(d*n)/(g*g+1);
cout<<s;
}
