//Write a C program to input two numbers and display their sum.
#include<stdio.h>
int main(){
	int a,b,sum;
	printf("enter the two digits to add:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("The sum of two numbers are:%d\n",sum);
	return 0;
}

