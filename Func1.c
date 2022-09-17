#include<stdio.h>
int factorial(int n);
int main()
{
    int n,temp;
    printf("enter the step : ");
    scanf("%d",&n);
    temp=factorial(n);
    printf("%d",temp);
   return 0;
}
 int factorial(int n){
    int  i,val=1;
    if (n==0)
    {
        return 1;
    }else{
         for ( i=n ; i>=1 ; i--)
        {
            val=i*val;
        }
    }return val;
 }
 