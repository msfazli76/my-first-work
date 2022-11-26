#include <iostream>
using namespace std;


main() {
int m,n,j;
cout<<"please enter first number:";
cin>>m;
cout<<"please second first number:";
cin>>n;
j=0;
while(m>=n){
	m=m-n;
	j++;
}
cout<<"quotient of division"<<m<<"by"<<n<<"is:"<<j<<"\n";
cout<<"remainder of division"<<m<<"by"<<n<<"is"<<m;
}
