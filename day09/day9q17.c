//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float discr,root1,root2;
	printf("enter the coffecients a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	discr=b*b-4*a*c;
	root1= (-b+sqrt(discr))/2*a;
	root2= (-b-sqrt(discr))/2*a;
	if(discr>0){
	printf("two distinct real roots");	
	printf("Root1=%f\n",root1);
	printf("Root2=%f\n",root2);
    }
    else if(discr==0){
    	printf("two equal real roots");
    	printf("so root of quadratic equation is:%f",root1);
	}
	else{
	 printf("No real roots");
    }
    return 0;
	 
}
