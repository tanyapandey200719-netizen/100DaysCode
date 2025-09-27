//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main(){
	int yrs;
	printf("Enter the year to get checked");
	scanf("%d",&yrs);
	if((yrs%4==0 && yrs%100!=0)||yrs%400==0)
	printf("Its a leap year");
	else
	printf("its not a leap year");
	return 0;
}
