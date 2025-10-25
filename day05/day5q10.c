//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
	int ts,hrs,min,sec;
	printf("Enter time in seconds:");
	scanf("%d",&ts);
	hrs=ts/3600;
	min=(ts%3600)/60;
	sec=ts%60;
	printf("Time:%d:%d:%d",hrs,min,sec);
	return 0;
}
