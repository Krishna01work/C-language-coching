#include<stdio.h>
int main()
{
  int n,fa=1,i;
  printf("enter the number");
  scanf("%d",&n);
  i=n;
  while (i>=1)
  {
    fa=fa*i;
    i--;
  }
  printf("%d",fa);
  return 0;
}