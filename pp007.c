//pp007: Write a program to input numbers from user till 0 is pressed and 
//check every given number to be even or odd.

#include<stdio.h>
int check(int x){	
	x%2?printf("Odd\n"):printf("Even\n");
	
	
}
int main(){
	for(;;){
		system("cls");
		int number;
		printf("Enter number to check even or odd and Enter 0 to exit !! \n Enter the number : ");
		scanf("%d",&number);
		switch(number){
			case 0 : exit(0);
			default : check(number);
			          system("pause");
			          
		}
	}
	return 0;
}
/*
Enter number to check even or odd and Enter 0 to exit !!
 Enter the number : 234532
Even
Press any key to continue . . .
*/
