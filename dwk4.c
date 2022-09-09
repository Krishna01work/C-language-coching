#include<stdio.h>
int main()
{
    int n,i,t=0;
    printf("enter the number : ");
    scanf("%d",&n);
    i=1;
    do
    {
        t=n*i;
        printf("%d\n",t);
        i++;
    } while (i<=10);
    return 0;
}