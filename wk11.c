// to print each digit in reverse order is polydron
#include<stdio.h>
int main()
{
    int n,dig,rev=0,temp;
    printf("enter the no: ");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        dig=n%10;
        rev=rev*10+dig;
        printf(" %d ",rev);
        n=n/10;
    }
    
    if (rev==temp)
    {
        printf("it is polidrone");
    }
    else
    {
        printf("it is not polidrone");
    }
   return 0; 
}