#include<stdio.h>
  int squar(int i);
int main()
{
    int n,i,temp;
    printf("enter the step : ");
    scanf("%d",&n);
    for ( i = 0; i <=n-1; i++){
    
       temp=squar(i);
    printf("%d\n",temp);
        }
   return 0;
}
    int squar(int i)
   {
   int m,val;
   m=i;
    val=m*m;
    return val ;
   }
   