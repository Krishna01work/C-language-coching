#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for ( i = 1; i <= 10; i++)
    {
        s=s+i;
        printf("%d\n",s);
    }
   return 0;
}