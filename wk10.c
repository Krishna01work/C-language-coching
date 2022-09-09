#include<stdio.h>
int main()
{
    int n,dig,s=0;
    printf("enter the number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        dig=n%10;
        s=s+dig;
        n=n/10;
        printf(" %d ",s);
    }   
 return 0;
}