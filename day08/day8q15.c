//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'){
	printf(" is a lower case alphabet",ch);
}
   else if(ch>='A'&&ch<='Z'){
   	printf(" is a Upper case alphabet",ch);
   }
   else if(ch>='0'&&ch<='9'){
   	printf("is a Digit\n",ch);
   }
   else{
   	printf(" is a special character\n",ch);
   }
   return 0;
	
}
