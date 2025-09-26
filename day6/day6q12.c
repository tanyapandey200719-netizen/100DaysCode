//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n>0){
		printf("it is a positive number");
	}
	else if(n<0){
		printf("it is a negative number");
	}
	else{
		printf("it is zero");
	}
	return 0;
}
