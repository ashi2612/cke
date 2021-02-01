//1.10. Write a program to input date in ddmmyyyy format and print as dd/mm/yyyy format
#include<stdio.h>

int main(){
	char s[11];
	int i=0;
	printf("Enter the date in ddmmyyyy format : ");
	fflush(stdin);gets(s);
	//puts(s);
	printf("%c%c/%c%c/%c%c%c%c",s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7]);
	return 0;
}

//Enter the date in ddmmyyyy format : 23122009
//23/12/2009
