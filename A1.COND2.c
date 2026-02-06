//COND2. Print grade using else-if conditions.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int grade=get_int("Enter grade ");

if(grade>=90 && grade<=100)
{printf("Excelent");}
else if(grade>=60)
{printf("Good");}
else{printf("Bad");}
return 0;
}
