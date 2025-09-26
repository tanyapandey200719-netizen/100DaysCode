//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){
	float r,t,CI,p,SI;
	printf("Enter the pricipal amount,rate,time(in years)");
	scanf("%f %f %f",&p,&r,&t);
	SI=(p*r*t)/100;
	printf("the SI is:%f",SI);
	CI=p*pow((1+ r/100),t)-p;
	printf("compound interest is:%f",CI);
	return 0;
}
