//pp005: Write a program to input two numbers and print all even numbers in given range.

#include<stdio.h>
int check(int x){	
	x%2?:printf("%d ",x);	
}

int main(){
	int a,b,i; 
	printf("Enter two numbers to print all even numbers in given range : ");
	scanf("%d %d",&a,&b);
	if(a>b){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	for(i=a;i<=b;i++)
	    check(i);
	return 0;
}

//Enter two numbers to print all even numbers in given range : 20 50
//20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50

//Enter two numbers to print all even numbers in given range : 90 50
//50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90
