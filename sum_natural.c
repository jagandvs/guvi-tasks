#include <stdio.h>
int main()
{
    int n,sum;
    printf("enter the number");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("the sum of first %d natural numbers is %d",n,sum);
    return 0;

}
