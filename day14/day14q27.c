//Q27: Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main(){
	int sum=0,i,n;
	printf("Enter how many numbers you want to add:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+(2*i-1);
		
	}
	printf("sum of the odd numbers are:%d\n",sum);
		
	return 0;
}
