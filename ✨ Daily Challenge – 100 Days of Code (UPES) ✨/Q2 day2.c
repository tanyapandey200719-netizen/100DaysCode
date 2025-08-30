//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
	int r,circumference,area;
	printf("Enter  r:");
	scanf("%d",&r);
	printf("area of circle is:%d\n",area=3.14*r*r);
	printf("circumference of circle is:%d\n",circumference=2*3.14*r);
	return 0;
}
