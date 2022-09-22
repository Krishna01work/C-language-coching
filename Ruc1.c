#include<stdio.h>
int fact(int n);
int main()
{
    int fa,n;
    printf("enter the step : ");
    scanf("%d",&n);
      fa=fact(n);
      printf("%d",fa);
    return 0;
}
 int fact(int n){
    int val=n;
    if (n==1)
    {
        return (val);
    }
    else
    {
        val=val*fact(n-1);
        return (val);
    }
}