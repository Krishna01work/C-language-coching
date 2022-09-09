#include<stdio.h>
int main()
{
    int n, s=0;
    n=0;
    do
    {
        s=s+n;
        printf("%d\n",n);
        n+=2;
    } while (n<=15);
    printf("the sum is %d\n",s);
    return 0;
}
