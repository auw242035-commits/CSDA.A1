//COND5. Nested if: Ticket Price Calculation
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int age=get_int("Enter age ");
int s=get_int("Are you a student? ");
int price;
if(age<12)
{price=50;}
else if(age<=60)
{if (s==1)
{price=80;}
else
{price=100;}
}
else
{price=60;}
printf("Ticket price:%d\n",price);
return 0;
}
