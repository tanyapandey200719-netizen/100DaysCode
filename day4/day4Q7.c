//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\nBefore swapping:a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After the swapping :a=%d,b=%d\n",a,b);
	return 0;
}
