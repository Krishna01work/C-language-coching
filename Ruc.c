#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("enter the step : ");
    scanf("%d",&n);
    printf("%d\n",sum(n));
    return 0;
}
 int sum(int n){
    int val=n;
    if (n==0)
    {
        return val;
    }
    else
    {   
        val=(val+sum(n-1));
        return val;
    }
    
}