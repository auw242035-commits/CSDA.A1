//Find the sum of numbers from 1 to 10.
#include <cs50.h>
#include <stdio.h>
int main(void)
{
int sum=0;
int i;
for(i=1;i<=10;i++)
{sum=sum+i;}

printf("sum=%d",sum);
    return 0;
}
