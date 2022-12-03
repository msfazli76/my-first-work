#include <iostream>
using namespace std;
main(){
	int a[5],b[5];
	int i,j,c;
	cout<<"enter elements of array a:"<<"\n";
	for(i=0;i<5;i++){
	cout<<"array a"<<(i+1)<<":";
	cin>>a[i];
	}
	cout<<"enter elements of array b:"<<"\n";
	for(j=0;j<5;j++){
	cout<<"array b"<<(j+1)<<":";
	cin>>b[j];}
	
	for(i=0;i<5;i++){
	 c=a[i];
	 a[i]=b[i];
	 b[i]=c;
	 
	 }
	cout<<"result of changing array's elements"<<"\n";
	for(i=0;i<5;i++){
	cout<<"array a"<<(i+1)<<":"<<a[i]<<"\n";
	}
	for(j=0;j<5;j++){
    cout<<"array b"<<(j+1)<<":"<<b[j]<<"\n";
		
	}
	
}

