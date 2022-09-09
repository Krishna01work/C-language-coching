#include<stdio.h>
int main()
{
    int n,dig;
    printf("enter the num");
    scanf("%d",&n);
    while (n!=0)
    {
        dig=n%10;
        printf("%d",dig);
        n=n/10;
    }
   return 0; 
}