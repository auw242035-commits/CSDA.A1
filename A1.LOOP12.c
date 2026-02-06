//LOOP12. Sum of first n even numbers.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n=get_int("Enter n ");
int i;
int sum=0;
for(i=1;i<=n;i++)
{
    if(i%2==0)
{sum=sum+i;}
}
printf("sum=%d\n",sum);
  return 0;
}
