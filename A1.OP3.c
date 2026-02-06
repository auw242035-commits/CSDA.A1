//OP3. Check whether a number is even or odd.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int P=get_int("Enter P ");

if(P%2==0){printf("P is even");}
else {printf("P is odd");}


return 0;
}
