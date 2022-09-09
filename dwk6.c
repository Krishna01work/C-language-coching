#include<stdio.h>
int main()
{
  int n,dig,s=0;
  printf("Enter the number : ");
  scanf("%d",&n);
  do
  {
    dig=n%10;
    s=s+dig;
    n=n/10;
    printf(" %d ",s);
  } while (n!=0);
  return 0;
}