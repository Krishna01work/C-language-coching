#include<stdio.h>
int main()
{
    int i,n,fa=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for ( i=n; i>=1; i--)
    {
        fa=fa*i;
    }
        printf(" %d ",fa);
   return 0;
}