#include<stdio.h>
#define LEN 5

int main(void)
{
    int a[LEN],n,i;
    printf("Enter array:\n");
    for(i=0;i<LEN;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,LEN);
    for(i = 0;i < LEN;i++)
    {
        printf("%5d",a[i]);
    }
    return 0;
}

void sort(int x[],int n)
{
    int i, j, temp;
    for(i = 0;i< n-1;i++)
    {
        for(j = i+1;j < n;j++)
        {
        if(x[j] > x[i])
        {  
            temp = x[j];
            x[j] = x[i];
            x[i] = temp;
        }
        }
    }
}