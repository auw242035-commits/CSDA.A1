//COND1. Check whether a number is positive, negative, or zero.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int A=get_int("Enter A ");

if(A>0){printf("A is positive");}

else if(A==0){printf("A is zero");}

else{printf("A is negetive");}
return 0;
}
