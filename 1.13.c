//1.13. Write a program to input data of a student like rollno (int),//name (string with space),gender (char),
//email (string without space),mobile (string without space), course (string with space) and show the output.
#include<stdio.h>

struct student{
	int rollno;
	char name[20],course[10],email[30],mobile[12],gender[10];
	//char email,mobile,gender;
};

int main(){
	struct student s;
	
	printf("Enter details \n");
	printf("Enter Roll no : ");scanf("%d",&s.rollno);  
	printf("Enter name : ");fflush(stdin);gets(s.name);
	printf("Enter gender : ");scanf("%s",&s.gender);
	printf("Enter email : ");scanf("%s",&s.email);
	printf("Enter mobile no : ");scanf("%s",&s.mobile);
	printf("Enter course : "); fflush(stdin);gets(s.course);	
	
	printf("%d %s %s %s %s %s",s.rollno,s.name,s.gender,s.email,s.mobile,s.course);
        
    return 0;
    
}

/*OUTPUT-
Enter details
Enter Roll no : 1234
Enter name : XYZ
Enter gender : FEMALE
Enter email : XYZ@gmil.com
Enter mobile no : 1234567890
Enter course : BSC
1234 XYZ FEMALE XYZ@gmil.com 1234567890 BSC
*/

/*
#include<stdio.h>

struct student{
	int rollno;
	char name[20] ,course[10];
	char email[30],mobile[12],gender[10];
};

int main(){
	struct student s;
	
	printf("Enter details /n");
	printf("Enter Roll no : ");scanf("%d",&s.rollno);
	printf("Enter name : ");fflush(stdin);gets(s.name);
	printf("Enter gender : ");fflush(stdin);gets(s.gender);
	printf("Enter email : ");fflush(stdin);gets(s.email);
	printf("Enter mobile no : ");fflush(stdin);gets(s.mobile);
	printf("Enter course : "); fflush(stdin);gets(s.course);
	
	printf("%d %s %s %s %s %s ", s.rollno,s.name, s.gender, s.email,s.mobile, s.course);
	
	return 0;
}
*/

