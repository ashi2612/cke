//1.6. Write a program to input a hexa decimal number and print into decimal, octal and hexa decimal

#include<stdio.h>
int main(){
	int number;
	printf("Enter Hexa decimal number : ");
	scanf("%x",&number);
	printf("Number in decimal %d \nNumber in octal %o \nNumber in hexa decimal %x",number,number,number);	
	return 0;
}
/*
Enter Hexa decimal number :
45
Number in decimal 69
Number in octal 105
Number in hexa decimal 45
*/
