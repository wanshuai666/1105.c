#include<stdio.h>
 int main(void)
 {
     int n,m,sum =0;
     printf("Enter n:\n");
     scanf("%d",&n);
     while(n >0)
     {
         m = n%10;
         sum +=m;
         n = n/10;
     }
     printf("sum is %d\n",sum);
     return 0;
 }
