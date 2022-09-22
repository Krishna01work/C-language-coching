#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("enter th step : ");
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
 int fib(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    else
    {
    int val;
    val=fib(n-1)+fib(n-2);
    return val;
    }
}