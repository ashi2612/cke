//1.1Write a program to input a floating number and show that number with two decimal points
#include<stdio.h>
int main(){
	float number;
	printf("Enter a floating number to see that number with two decimal points : ");
	scanf("%f",&number);
	printf("Number with two decimal points %.2f",number);	
	return 0;
}
//Enter a floating number to see that number with two decimal points : 123.234
//Number with two decimal points 123.23

//Enter a floating number to see that number with two decimal points : 853.45325
//Number with two decimal points 853.45
