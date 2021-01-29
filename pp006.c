//pp006: Write a program to create an array of 10 integers, input the data and show all even numbers in given numbers.

#include<stdio.h>
int check(int x){	
	x%2?:printf("%d ",x);	
}

int main(){
	int a[10],i;
	printf("Enter an array of 10 integers to show all even numbers in given numbers --\n ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<10;i++)
	    check(a[i]);
	return 0;
		
	
}
/*
Enter an array of 10 integers to show all even numbers in given numbers --
 12
4
456
67
45
45
56
324
43536
43
12 4 456 56 324 43536
*/
