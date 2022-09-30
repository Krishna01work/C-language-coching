//to display arrays elements on screen
#include<stdio.h>
int main()
{
    int mark[5]={45,66,76,25,35};
    printf("content of an array : ");
    for (int  i = 0; i < 5; i++)
    {
        printf("%d ",mark[i]);
    }
    printf("\n");
    return 0;
} 