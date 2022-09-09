// To print factorial of given number 
#include<stdio.h>
int main()
{
    int n,fac=1,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    i=n;
    do
    {
        fac=fac*i;
        i--;
    } while (i>=1);
  printf("%d\n",fac);
  return 0;
}