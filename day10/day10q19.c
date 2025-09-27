//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main(){
float a, b, c;
printf("Enter three sides of the triangle: "); 
scanf("%f %f %f", &a, &b, &c); 
if ((a + b > c) && (a + c > b) && (b + c > a)) {
       printf("The triangle is VALID.\n");
       if (a == b && b == c) {
         printf("It is an Equilateral triangle.\n");
        } 
       else if (a == b || b == c || a == c) {
      printf("It is an Isosceles triangle.\n");
  }
 else { 
              if ((a * a + b * b == c * c) || 
                   (a * a + c * c == b * b) || 
                    (b * b + c * c == a * a)) {
                    printf("It is a Right-angled triangle.\n");
                 }  else {
                         printf("It is a Scalene triangle.\n");
                 }
     }
 } else {
 printf("The given sides do NOT form a valid triangle.\n");
 }
return 0;
}


