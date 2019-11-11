#include<stdio.h>
int main(void)
{
    int s,large;
    printf("Enter s:\n");
    scanf("%d&d",&s);
   if(s>0)
   {
       large=s;
   }
   else(s<=0);
   {
       large=-s;
   }
   printf ("max is %d\n",large);
   return 0;
}