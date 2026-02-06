//OP1.Input two integers and print sum, difference, product, quotient, and remainder.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
int x=get_int("Enter x ");
int y=get_int("Enter y ");

printf("\nSUM=%d",x+y);

printf("\nDIFFERENCE=%d",x-y);

printf("\nPRODUCT=%d",x*y);

printf("\nQUOTIENT=%d",x/y);

printf("\nREMINDER=%d",x%y);
return 0;
}
