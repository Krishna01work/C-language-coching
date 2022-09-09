#include<stdio.h>
int main()
{
    int n,s=0;
    n=1;
    do
    {
        s=s+n;
        n++;
    } while (n<=10);
    printf(" %d ",s);
    return 0;
}