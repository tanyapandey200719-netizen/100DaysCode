//write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
	int l,b,perimeter,area;
	printf("Enter the lenght and breadth to get the perimeter and area calculated:");
	scanf("%d %d",&l,&b);
	perimeter=2*(l+b);
	area=l*b;
	printf("Perimeter of reactange is:%d\narea of reactangle is:%d\n",perimeter,area);
	return 0;
}
