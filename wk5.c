#include<stdio.h>
int main()
{
int n,s=0,i;
printf("enter the numer : ");
scanf("%d",&n);
i=1;
while (i<=n)
{
    s=s+i*i;
    i++;
    printf(" %d ",s);
}
return 0;
}
