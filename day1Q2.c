//Write a program to input two numbers and display their sum , difference,product,and quotient.
#include<stdio.h>
int main(){
	int a,b,sum,difference,product,quotient;
	printf("Enter the two numbers to perform the arthmetic operations:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	difference=a-b;
	product=a*b;
	quotient=a/b;
	printf("sum=%d\ndifference=%d\nproduct=%d\nquotient=%d",sum,difference,product,quotient);
	return 0;
}
