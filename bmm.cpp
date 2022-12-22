#include <iostream>

using namespace std;
 
 int bmm(int a, int b){
 	if (b==0){
 	return a;
	 }
	else{
	return bmm(b,a%b);
	}
 }

int main() {
int x,y;
cout<<"please enter a number:";
cin>>x;
cout<<"please enter a number:";
cin>>y;
cout<<"gcd of"<<x<<"&"<<y<<"is"<<bmm(x,y);
}
