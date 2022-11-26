#include <iostream>
using namespace std;
 main() {
 	int m,n,s;
 	cout<<"please enter two integer values:";
 	cin>>m>>n;
 	while (m%n!=0){
    s=m%n;
    m=n;
    n=s;
	 }
	 
    cout<<"gcd of num1 and num2 is:"<<n;

}
