#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float s=0;
    n=1;
    do
    {
        s=sqrt(n);
        printf(" %f \n",s);
        n++;
    } while (n<=10);
   return 0;
}