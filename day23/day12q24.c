/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at rs5/unit 
Next 100 units at rs7/unit 
Next 100 units at rs10/unit 
Above at rs12/unit*/
#include<stdio.h>
int main(){
	int unit;
	printf("Enter the unit consumed:");
	scanf("%d",&unit);
	if(unit>=1&&unit<=100){
		printf("the electricity bill will be:%d rs",unit*5);
	}
	else if(unit>=101&&unit<=200){
		printf("the electricity bill will be:%d rs",unit*7);
	}
	else if(unit>=201&&unit<=300){
		printf("the electricity bill will be:%d rs",unit*10);
	}
	else if(unit>=301){
		printf("the electricity bill will be:%d rs",unit*12);
	}
	else{
		printf("Please! Only enter numeric value");
	}
	return 0;
}
