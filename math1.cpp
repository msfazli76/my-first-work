#include <iostream>
using namespace std;

main(){
int m,n,r,j;
cout<<"please enter first number:";
cin>>m;
cout<<"please enter second number:";
cin>>n;
j=1;
r=1;
while (j<=n){
	r=r*m;
	j++;
	}
	cout<<m<<"to the power of"<<n<<"is"<<r;
}
