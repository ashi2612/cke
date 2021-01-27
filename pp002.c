//pp002: Write a program to input a number and check it to be even or odd using switch statement.

#include<stdio.h>

int main(){
	int number;
	printf("Enter a number to check Even or Odd :");
	scanf("%d",&number);
	
	switch(number%2){
		case 0:printf("Even");break;	
		default:printf("Odd");
	}
	    
return 0;

}

//Enter a number to check Even or Odd :12
//Even

//Enter a number to check Even or Odd :213
//Odd

