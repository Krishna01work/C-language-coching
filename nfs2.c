/* To print this pattern 654321   
                         54321
                         4321
                         321
                         21
                         1    */

#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 6; i >=1; i--)
    {
        for ( j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
