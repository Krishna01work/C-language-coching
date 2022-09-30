//to arrenge arrays elements in discending order
#include<stdio.h>
int main()
{
    int i,j,n,temp=0,num[50];
    printf(" How many numbers are in array : ");
    scanf("%d",&n);
    printf("Enter an array element : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Unsorted element : ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",num[i]);
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }   
    }     
        printf("Shorted array : ");
        for ( i = 0; i < n; i++)
        {
            printf(" %d ",num[i]);
        }
        printf("\n");
    
    return 0;
}