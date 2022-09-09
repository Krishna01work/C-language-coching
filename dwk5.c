#include<stdio.h>
int main()
{
    int n,dig;
    printf("Enter the number : ");
    scanf("%d",&n);
    do
    {
        dig=n%10;
        printf("%d",dig);
        n=n/10;
    } while (n!=0);
return 0;
}