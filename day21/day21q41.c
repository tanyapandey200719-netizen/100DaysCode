//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    lastDigit = temp % 10;
    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    firstDigit = temp; 
    swappedNum = lastDigit * pow(10, digits); 
    temp = num % (int)pow(10, digits);       
    swappedNum += temp - lastDigit + firstDigit;
    printf("Number after swapping first and last digits: %d\n", swappedNum);
    return 0;
}


