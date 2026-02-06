//LOOP16. Number pattern:
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int i,j;
for(i=1;i<=4;i++)
{
 for(j=1;j<=i;j++)
{printf("%d",j);}
printf("\n");
}
  return 0;
}
