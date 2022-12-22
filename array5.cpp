#include <iostream>

using namespace std;
main(){
int n[10]={1,1,0,0,0,0,0,0,0,0};
int fib,i,a,b;
a=1;
b=1;
for(i=2;i<10;i++){
	fib=a+b;
	a=b;
	b=fib;
	n[i]=fib+n[i];

	
}

cout<<"fibonacci:\n";
for(i=0;i<10;i++){
	cout<<" "<<n[i]<<"\n";
}

}
