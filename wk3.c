#include<stdio.h>
int main()
{
    int n,s=0;
    n=1;
    while (n<=10)
    {
        s=s+n;
        n++;
    }
        printf("%d",s);
    return 0;
}