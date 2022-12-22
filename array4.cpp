#include <iostream>

using namespace std;

main(){
int n[10];
int j,i,c;

cout<<"please enter 10 numbers:"<<"\n";
for(i=0;i<10;i++){
cin>>n[i];
}
for(i=0;i<10;i++){
	for(j=0;j<(10-i);j++){
		if(n[j]>n[j+1]){
			c=n[j];
			n[j]=n[j+1];
			n[j+1]=c;
		}
	}
}
cout<<"min2:\n";
for(i=0;i<10;i++){
if(i=1){
	cout<<n[i];
	break;
}
}
}
