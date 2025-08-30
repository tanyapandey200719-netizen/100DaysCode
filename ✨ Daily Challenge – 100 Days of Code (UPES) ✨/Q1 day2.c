//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
	int l,b,perimeter,area;
	printf("Enter the number l:");
	scanf("%d",&l);
	printf("Enter the number b:");
	scanf("%d",&b);
	printf("area of the rectangle is:%d\n",area=l*b);
	printf("perimeter of the rectangle is:%d\n",perimeter=2*(l+b));
	return 0;
}
