#include<stdio.h>
int sum( int n);
int main()
{
    int n,temp;
    printf("enter the step : ");
    scanf("%d",&n);
    temp = sum(n);
    printf("%d\n",temp);
    return 0;
}
  int sum(int n)
  {
    int s=0;
    for (int i = 1; i <= n; i++)
    {
        s = s+i;
    }
        return s;
  }