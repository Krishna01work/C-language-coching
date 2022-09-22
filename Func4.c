#include<stdio.h>
int fun();
int x, y=5;
int main()
{
     x=5;
    fun();
    return 0;
}
 int fun(){
    int sum;
    sum=x+y;
    printf("%d\n",sum);
}