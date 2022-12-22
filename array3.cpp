#include <iostream>
using namespace std;
main(){
int m[10]={2,4,6,9,13,16,19,23,26,0};
int n,i,j;
for(i=0;i<10;i++){
	cout<<m[i]<<"  ";
}
cout<<"\nplease enter a number:"<<"\n";
cin>>n;
for(i=0;i<9;i++)
	if(n>=m[i] && n<m[i+1]){
		for(j=9;j>i+1;j--)
			m[j]=m[j-1];
		m[i+1] = n;
		break;
	}
		
    
for(i=0;i<10;i++){
cout<<m[i]<<"  ";
}
}

