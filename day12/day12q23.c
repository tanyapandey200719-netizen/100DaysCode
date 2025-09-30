/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: Rs2/day 
Next 5 days late: Rs4/day 
Next 20 days days late: Rs6/day 
More than 30 days: Membership Cancelled.*/
#include<stdio.h>
int main(){
	int days;
	printf("Enter the no. of days the book was late submitted:");
	scanf("%d",&days);
	if(days>=1&&days<=5){
		printf("so the late fine is:%d rs",days*2);
	}
	else if(days>=6&&days<=10){
		printf("so the late fine is:%d rs",days*4);
	}
	else if(days>=11&&days<=30){
		printf("so the late fine is:%d rs",days*6);
	}
	else if(days>=31){
		printf("Membership cancelled");
	}
	else{
		printf("Please! Enter a numeric value");
	}
	return 0;
}

