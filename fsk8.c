#include<stdio.h>
int main()
{
    int s=0,i;
    for ( i = 1; i <= 10; i+=2)
    {
        s=s+i*i;
        printf(" %d ",s);
    }
    return 0;
}
