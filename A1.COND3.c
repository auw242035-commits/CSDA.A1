//COND3. Print the larger of two numbers or Equal.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int p=get_int("Enter p ");
int q=get_int("Enter q ");

if(p>q)
{printf("p is greater");}
else if(p<q)
{printf("q is greater");}
else{printf("p and q are equel");}
return 0;
}
