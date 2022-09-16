/* To Print this pattern 1
                         21
                         321
                         4321
                         54321
                         654321   */

#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=6; i++)
    {
        for ( j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
