//LOOP11. Count numbers divisible by 5 from 1 to n.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n=get_int("Enter n ");
int i;
int count=0;
for(i=1;i<=n;i++)
{
    if(i%5==0)
{count=count+1;}
}
printf("Count=%d\n",count);
  return 0;
}

