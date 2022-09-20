#include<stdio.h>
int fibon(int n);
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    fibon(n);
    return 0;
}
 int fibon(int n)
 {
    int a=0,b=1,fib,i;
    for ( i = 1; i <= n; i++)
    {
        fib=a+b;
        a=b;
        b=fib;
        printf("%d\n",fib);
    }
 }