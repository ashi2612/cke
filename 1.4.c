//1.4. Write a program input a decimal number and print into decimal, octal and hexa decimal

#include<stdio.h>
int main(){
	int number;
	printf("Enter decimal number : ");
	scanf("%d",&number);
	printf("Number in decimal %d \nNumber in octal %o \nNumber in hexa decimal %x",number,number,number);	
	return 0;
}

/*
Enter decimal number : 25
Number in decimal 25
Number in octal 31
Number in hexa decimal 19
*/
