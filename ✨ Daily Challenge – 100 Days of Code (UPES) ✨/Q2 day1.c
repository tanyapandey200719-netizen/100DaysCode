//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
	int a,b,sum,sub,mul;
	float div;
	printf("Enter the number a:");
	scanf("%d", &a);
	printf("Enter the number b:");
	scanf("%d", &b);
	div=(float)a/b;
	printf("sum of the numbers is: %d\n",sum=a+b);
	printf("sub of the numbers is: %d\n",sub=a-b);
	printf("mul of the numbers is:%d\n",mul=a*b);
	printf("div of the numbers is:%f\n",div);
	return 0;
}
