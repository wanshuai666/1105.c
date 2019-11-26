#include<stdio.h>
#include<math.h>
int main(void)
{
    int  n,i,k=0;
    for(n=2;n<=500;n++)
    {
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(i > sqrt(n))
    {
        printf("%5d",n);
        k++;
        if(k % 10 ==0)
        {
            printf("\n");
        }
    }
    }
}