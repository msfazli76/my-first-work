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
int fact(int j){
if(j==0){
	return 1;
}
else {
    return j*fact(j-1);
}

}

 int main()
 {
float n,sin,cos;
cout<<"plese enter a number:";
cin>>n;
sin=n-(pow(n,3))/(fact(3))+(pow(n,5))/(fact(5))-(pow(n,7))/(fact(7));
cos=1-(pow(n,2))/(fact(2))+(pow(n,4))/(fact(4))-(pow(n,6))/(fact(6));
cout<<"tan of"<<n<<"is"<<sin/cos;
}
