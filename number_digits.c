#include <stdio.h>

int main()
{
  long int i,n;
  int count=0;
  printf("Enter the number");
  scanf("%ld",&i);
  while(i!=0)
  {
   n=i;
   i=i%10;
    count++;
    i=n/10;
  }
  printf("The digits of entered number is %d",count);
  return 0;

}
