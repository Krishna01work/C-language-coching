/* To print this pattern 1  
                         22
                         333
                         4444
                         55555
                         666666 */

#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=6; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
