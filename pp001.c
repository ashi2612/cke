//pp001: Write a program to input a number and check it to be even or odd using if statement.
#include<stdio.h>

int main(){
	int number;
	printf("Enter a number to check Even or Odd :");
	scanf("%d",&number);
	
	if (number%2)
	   printf("Odd");
	   
	else 
	   printf("Even");
		
return 0;

}

//Enter a number to check Even or Odd :1234
//Even

//Enter a number to check Even or Odd :1234435
//Odd
