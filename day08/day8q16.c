//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c){
	printf("a=%d is the highest",a);
    }
	else if(b>a && b>c){
	printf("b=%d is the highest",b);
    }
	else if(c>a && c>b){
	printf("c=%d is the highest",c);
    }
	return 0;
}
