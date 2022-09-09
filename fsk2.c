#include<stdio.h>
int main()
{
    int i,n,ta=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for ( i = 1; i <= 10; i++)
    {
        ta=n*i;
        printf(" %d ",ta);
    }
   return 0;
}