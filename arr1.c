// to calculate sum of array element 
#include<stdio.h>
int main()
{
    int s=0, num[5]={2,1,3,4,5};
    printf("Sum of an array digit : ");
    for (int i = 0; i < 5; i++)
    {
        s=s+num[i];
    }
    printf("%d\n",s);
    return 0;
}