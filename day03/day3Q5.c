//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
	double C,F;
	printf("Enter the temperature in degree celsius");
	scanf("%lf",&C);
	printf("the temperature in fahrenheit is:%lf",F=(C*9/5)+32);
	return 0;
}
