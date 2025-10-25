//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n%2==0) {
	printf("it is a even number");
    }
	else {
	printf("it is a odd number");
    }
	return 0;
}
