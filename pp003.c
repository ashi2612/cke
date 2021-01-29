//pp003: Write a program to input a number and check it to be even or odd using bitwise operator.

#include<stdio.h>
int evenodd(int n){
	n & 1 ? printf("Odd") :printf("Even");
}
int main(){
	
	int number,x;
	printf("Enter a number to check Even or Odd :");
	scanf("%d",&number);
	x=evenodd(number);	
	return 0;
}
/*
Enter a number to check Even or Odd :45
Odd
Enter a number to check Even or Odd :5676
Even
*/
