//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
	int area,circumference,r;
	printf("enter the radius(in cm):");
	scanf("%d",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("area and circumference of circle is:%d\n%d",area,circumference);
	return 0;
}
