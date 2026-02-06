//LOOP9. Factorial of a Number
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n=get_int("Enter n ");
int i;
int factorial=1;

for(i=1;i<=n;i++)
{factorial=factorial*i;}
printf("factorial=%d\n",factorial);
    return 0;
}
