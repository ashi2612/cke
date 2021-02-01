//1.9. Write a program to input a date in dd-mm-yyyy format and print date as dd/mm/yyyy format

#include<stdio.h>
int main(){
	char s[11];
	int i=0;
	printf("Enter the date in dd-mm-yyyy format : ");
	fflush(stdin);gets(s);
	//puts(s);
	//printf("%c%c/%c%c/%c%c%c%c",s[0],s[1],s[3],s[4],s[6],s[7],s[8],s[9]);
	while (s[i]!=NULL){
		if (s[i]=='-')
		   printf("/");
		else
		   printf("%c",s[i]); 
		i++	;
	}
	return 0;
}

//Enter the date in dd-mm-yyyy format : 31-10-1892
//31/10/1892
