//1.5. Write a program to input an octal number and print into decimal, octal and hexa decimal.

#include<stdio.h>
int main(){
	int number;
	printf("Enter octal number : ");
	scanf("%o",&number);
	printf("Number in decimal %d \nNumber in octal %o \nNumber in hexa decimal %x",number,number,number);	
	return 0;
}
/*
Enter octal number : 345
Number in decimal 229
Number in octal 345
Number in hexa decimal e5
*/
