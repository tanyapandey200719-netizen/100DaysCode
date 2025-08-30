//convert tempreature from celsius to ferhrenheit 
#include<stdio.h>
int main(){
	double c, f;
	printf("enter the tempreature in degree celsius:");
	scanf("%lf",& c);
	printf("the temperature in fahrenheit is: %lf\n", f = (c * 9/5 )+ 32);
	return 0;
}
