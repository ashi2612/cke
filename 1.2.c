//1.2. Write a program to input a floating number and show without decimal point.
#include<stdio.h>
int main(){
	float number;
	printf("Enter a floating number to see that number with two decimal points : ");
	scanf("%f",&number);
	printf("Number with two decimal points %.0f",number);	
	return 0;
}


//Enter a floating number to see that number with two decimal points :
//23124.34124
//Number with two decimal points 23124
