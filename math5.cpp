#include <iostream>

using namespace std;

main() {
int n,i,m,s,c,flag;
cout<<"please enter a number:";
cin>>n;
c=0;

for (i=2;i<=n-1;i++){
	flag = 1;
	for(m=2;m<=i/2;m++)	{
		if(i%m==0){
			flag=0;
			break;
	}
}
	if (flag == 1)
		c = c + i;
}

cout<<"the sum of prime numbers less than your number is:"<<c;

}
