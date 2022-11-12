#include <iostream>
using namespace std;
/* salary calculation */
main() {
	int n, FinalAmount; 
	 
	cout <<"please enter the number in Rial:";
	cin>>n;
	
	if (n<60000000){
		FinalAmount = n;
	}
	else if(n>=60000000 && n<80000000) 
			FinalAmount= n-((5*n)/100);
		
    else if(n>=80000000 && n<100000000) {
	    FinalAmount=n-((10*n)/100);
	}
	else if (n>=100000000 && n<140000000){
    	FinalAmount=n-((15*n)/100);
	}
	else if(n>=140000000 && n<180000000 ) {
		FinalAmount=n-((20*n)/100);
			
	}
	else if (n>=180000000 && n<250000000){
	    FinalAmount=n-((25*n)/100);
	}
	else {
		FinalAmount=n-((35*n)/100);
		
	}
	
	cout << "Final amount = " << FinalAmount << "Rials" ;
}
