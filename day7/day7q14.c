//Write a program to input a character and check whether it is a vowel or consonant using if�else.
#include<stdio.h>
int main(){
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z')) {
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u'){
			printf("%c is a vowel\n",ch);
		}else{
			printf("%c is a consonant\n",ch);
		}
	}else {
		printf("invail input please enter the alphabet\n");
	}
	return 0;
}
