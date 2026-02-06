//LOOP19. Reverse star pattern:
#include <stdio.h>
#include <cs50.h>
int main(void)
{int i,j;
    for(i=4;i>=1;i--)
{
    for(j=1;j<=i;j++){printf("*");}

printf("\n");
}
    return 0;
}
