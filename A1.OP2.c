//Convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
#include <cs50.h>

int main(void)
{
float C=get_float("Enter temparature in Celsius ");
float F;

F=((C*9)/5)+32;
printf("\nF=%f",F);
return 0;
}
