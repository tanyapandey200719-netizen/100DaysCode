//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
	float CP,SP,profit_percnt,loss_percnt;
	printf("Enter the Cost price and Selling Price");
	scanf("%f %f",&CP,&SP);
	profit_percnt=((SP-CP)/CP)*100;
	loss_percnt=((CP-SP)/CP)*100;
	if(SP>CP){
		printf("The profit percent is:%f",profit_percnt);
	}
	else if(CP>SP){
		printf("The loss percent is:%f",loss_percnt);
	}
	else{
		printf("no profit no loss");
	}
	return 0;
}

