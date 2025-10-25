//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
	int n,sum=0,i;
    printf("Enter the positive integer:");
    scanf("%d",&n);
    if (n<=0){
    	printf("Please enter the a positive integer.");
	}
	
    for(i=1;i<=n;i++)  {
     sum=sum+i;
    }
    printf("the sum of first n natural numbers is:%d\n",sum);
    return 0;
}
    
    
	 


