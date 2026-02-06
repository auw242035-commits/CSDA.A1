//LOOP14. Count digits in a number.

#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n=get_int("Enter n ");
int count=0;
int x=n;
while(x!=0)
{

  x=x/10;
  count++;
}printf("Count=%d ",count);

  return 0;
}
