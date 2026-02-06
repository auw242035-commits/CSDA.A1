//Input n. Find the sum from 1 to n.
#include <cs50.h>
#include <stdio.h>
int main(void)
{int n=get_int("Enter n ");
int sum=0;
int i;
for(i=1;i<=n;i++)

{sum=sum+i;}

printf("sum=%d",sum);
    return 0;
}
