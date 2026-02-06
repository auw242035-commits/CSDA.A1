//Print multiplication table of n.
#include <cs50.h>
#include <stdio.h>
int main(void)
{
int n=get_int("Enter n ");
int i;
for(i=1;i<=10;i++)
    {
  printf("%d*%d=%d\n",n,i,n*i);
    }
  return 0;
}
