/*pp010: Create a header file as pp010.h having a function iseven() 
which takes a number as input and returns 1 if the number is even else returns 0.
 Write a program pp010.c, include the header file into 
 */
 
 #include<stdio.h>
 #include"pp010.h"   //pp010.h file use as header file 


int main(){
	int number;
	printf("Enter a number to check Even or Odd :");
	scanf("%d",&number);
	iseven(number)?printf("even"):printf("odd"); 
return 0;

}
//Enter a number to check Even or Odd :45
//odd
