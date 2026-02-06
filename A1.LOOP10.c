//LOOP10. Print first n multiples of 3.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n=get_int("Enter n ");
int a=3;
int b;
int i;
for(i=1;i<=n;i++)
{
b=a*i;
printf("%d*%d=%d\n",a,i,b);
}
    return 0;
}
