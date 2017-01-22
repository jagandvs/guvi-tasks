#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n==0)
		printf("the number is neither positive nor negative");
	else if(n>0)
		printf("the number is positive");
	else if(n<0)
		printf("the number is negative");
	getch();
	return 0;
}