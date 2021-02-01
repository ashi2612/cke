//1.12. Write a program to input date in any given format like dd mm yyyy, dd-mm-yyyy, dd/mm/yyyy format
// and show that date in dd-mm-yyyy format

#include<stdio.h>
int change(char *s){
	int i=0;
	while (s[i]!=NULL){
		if (s[i]=='/' || s[i]==' ')
		   printf("-");
		else
		   printf("%c",s[i]); 
		i++	;
	}
	return ;
}
int main(){
	char s[11];
	
	printf("Enter the date in dd-mm-yyyy format : ");
	fflush(stdin);gets(s);
	//puts(s);
	//printf("%c%c-%c%c-%c%c%c%c\n",s[0],s[1],s[3],s[4],s[6],s[7],s[8],s[9]);
	change(s);	
	return 0;
}

//Enter the date in dd-mm-yyyy format : 01 01 2009
//01-01-2009

//Enter the date in dd-mm-yyyy format : 12/09/2008
//12-09-2008

//Enter the date in dd-mm-yyyy format : 12-12-1990
//12-12-1990
