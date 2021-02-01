//1.3. Write a program to input a floating number and 
//show that number in width of 10 with two decimal point and zero fill

#include<stdio.h>
int main(){
	float number;
	printf("Enter a floating number to see that number with two decimal points : ");
	scanf("%f",&number);
	printf("Number with two decimal points %010.2f",number);	
	return 0;
}

//Enter a floating number to see that number with two decimal points : 123.24345
//Number with two decimal points 0000123.24

//Enter a floating number to see that number with two decimal points : 1.2
//Number with two decimal points 0000001.20

//Enter a floating number to see that number with two decimal points : 12344.23523
//Number with two decimal points 0012344.24
