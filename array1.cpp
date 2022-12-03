#include <iostream>

using namespace std;
 main(){
 	int numbers[10];
 	int i,max,min; 
 	float avg;
 	
 	for(i=0;i<10;i++){
 	cout<<"Enter the  number"<<(i+1)<<":";
 	cin>>numbers[i];
	 }
 	max=numbers[0];
 	for(i=0;i<10;i++){
 		if(numbers[i]>max){
 		max=numbers[i];
		 }
		
	 }
 	min=numbers[0];
 	for(i=0;i<10;i++){
 		if(numbers[i]<min){
 		min=numbers[i];
		 }
	}
	avg=(max+min)/2;
	cout<<"max number:"<<max<<"\n";
	cout<<"min number:"<<min<<"\n";
	cout<<"the average of maxnumber and minnumber is:"<<avg;
	 
	
}
