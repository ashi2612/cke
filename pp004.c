//pp004: Write a program to input a number and check it to be even or odd without
// using any arithmetic, relational, logical or bitwise operator.

#include<stdio.h>
struct evenodd{
	unsigned n:1;     // Using bit field 
};
int main(){
	
	int number;
	struct evenodd a;
	printf("Enter a number to check Even or Odd :");
	scanf("%d",&number);
	a.n=number;
	a.n?printf("Odd"):printf("Even");	
	return 0;
	
}
/*
Enter a number to check Even or Odd :45
Odd

Enter a number to check Even or Odd :5980
Even

*/
