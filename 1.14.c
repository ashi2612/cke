//1.14. Write a program to input name of a person and print first four character only

#include<stdio.h>
int main(){
	char name[20];int i;
	printf("Enter name of a person : ");
	gets(name);
	//printf("%s",name);
	//printf("%c%c%c%c\n",name[0],name[1],name[2],name[3]);
	
	for(i=0;i<4;i++)
	  printf("%c",name[i]);
	return 0;
	
}

//Enter name of a person : Ashi Aggarwal
//Ashi

//Enter name of a person : Arvind Kumar
//Arvi
