#include <iostream>
using namespace std;
/* salary calculation */
main() {
	int n,a,b,c,d,e,f; 
	cout <<"please enter the number in Rial:";
	cin>>n;
	if (n<60000000){
		cout<<"final amount:";
		cout<<n<<"Rials";
	}
	else if(n>=60000000 && n<80000000) {
		cout<<"final amount:";
		a=(5*n)/100;
		cout<<n-a<<"Rials";
	}
    else if(n>=80000000 && n<100000000) {
	finalAmount=n-((10*n)/100);
	}
	else if (n>=100000000 && n<140000000){
    cout<<"final amount:";
    c=(15*n)/100;
    cout<<n-c<<"Rials";
	}
	else if(n>=140000000 && n<180000000 ) {
	cout<<"final amount:";
	d=(20*n)/100;
	cout<<n-d<<"Rials";
	}
	else if (n>=180000000 && n<250000000){
	cout<<"final amount:";
	e=(25*n)/100;
	cout<<n-e<<"Rials";
	}
	else
	{cout<<"final amount:";
	f=(35*n)/100;
	cout<<n-f<<"Rials";
	}
}
