#include<stdio.h>

int main(void)
{
    int grade,score;
    printf ("Enter score:\n");
    scanf("%d",&score);
    grade = (score -50)/10;

    switch (grade){
        case 0:printf("E\n");
        break;
        case 1:printf("D\n");
        break;
        case 2:printf("C\n");
        break;
        case 3:printf("B\n");
        break;
        case 4:printf("A\n");
        break;
        default:printf("illegal grade\n");
        break;
    }
    return 0;
}