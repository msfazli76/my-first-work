#include <iostream>
using namespace std; 

main() {
int n,i,c,m;
cout<<"please enter a number:";
cin>>n;
c=0;

for(i=2;i<=n/2;i++){
	if(n%i==0){
	m=i+c;
	c=m;
	}
}
cout<<"the sum of divisors of"<<n<<"is"<<m;
}
