//Q26: Write a program to print numbers from 1 to n.
#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the number till you want to see the output:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n",i);
	}
	return 0;
}
