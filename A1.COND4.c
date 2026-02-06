//COND4. Check whether a year is a leap year.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int YEAR=get_int("Enter a Year ");

if (YEAR%400==0)
{printf("Leap year");}
else if (YEAR%4==0 && YEAR%100!=0)
{printf("Leap year");}
else{printf("Not a leap year");}

return 0;
}
