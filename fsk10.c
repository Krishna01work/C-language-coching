#include<stdio.h>
int main()
{
  int a=0,b=1,fib,n,i;
  printf("Enter the number : ");
  scanf("%d",&n);
  for ( i=1; i<=n; i++)
  {
    fib=a+b;
    a=b;
    b=fib;
    printf(" %d ",fib);
  }
  return 0;
}
