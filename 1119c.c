#include<stdio.h>

int main(void)
{
    int  20n,i;
    double term = 1,sum = 0;
    printf("Enter n:\n");
    scanf("%d",&n);


    for(i = 1;i <= n;i++)
    {
      term = term / i;
      sum +=  term;
    }
    sum += 1;
    printf("sum = %.5lf\n",sum);
    return 0;
}