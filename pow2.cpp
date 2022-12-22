#include <iostream>

using namespace std;

int pow(int x,int y){
if (y>1){
	return (x*pow(x,y-1));
}
else {
    return x;
}
}

int main(){
	int a,b;
	cout<<"please enter a number:";
	cin>>a;
	cout<<"please enter a number:";
	cin>>b;
	cout<<a<<"to the power of"<<b<<"is:"<<pow(a,b);

}
