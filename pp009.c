/*pp009: Write a program having a function iseven() which takes a number as input and returns 1 
if the number is even else returns 0. Create the main() function to input a number 
and check it to be even or odd using iseven() function.
*/
#include<stdio.h>
int iseven(int x){	
	return x%2?0:1;	
}

int main(){
	int number;
	printf("Enter a number to check Even or Odd :");
	scanf("%d",&number);
	iseven(number)?printf("even"):printf("odd");                            
	if (iseven(number))         
	   printf("even");    
	   
	else 
	   printf("odd");
		
return 0;

}

