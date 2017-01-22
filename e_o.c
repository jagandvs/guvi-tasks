#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	if(n%2==0&&n>0)
		printf("The number is even");
	else if(n%2!=0&&n>0)
		printf("The number is odd");
	else if(n<0)
		printf("enter the valid number");
	getch();
	return 0;
}