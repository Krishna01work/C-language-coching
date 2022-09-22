#include<stdio.h>
int squar(int n);
int main()
{
    int n;
    printf("enter the step : ");
    scanf("%d",&n);
        printf("%d",squar(n));
    return 0;
}
 int squar(int n){
    int val;
    if (n==0)
    {
        return 0;
    }
    else
    {
    val = (n+(n-1))+squar(n-1);
    printf("%d",val);
    return (val);      
    }
} 
 
