#include<stdio.h>
int main(void)
{
    int i,n,term = 1,sum = 0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        term = term * i;
        sum = sum + term;
    }
    printf("sum is %d\n",sum);
     return 0;
}