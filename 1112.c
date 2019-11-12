#include<stdio.h>

int main(void)
{
    int choice;
    float price;
    printf("Enter choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("apple\n");price=3.0; break;
        case 2:printf("pears\n");price=2.50; break;
        case 3:printf("orange\n");price=4.10; break;
        case 4:printf("grapes\n");price=10.20; break;
        default:printf("Thanks\n");price=0.00; break;
    }
    printf("price=%.1f\n",price);
    return 0;
}