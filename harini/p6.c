#include <stdio.h>
int main()
{
    int a=5,b=6;
    a=a+b;//a=11
    b=a-b;//b=5
    a=a-b;//a=6
    printf("a=%d \n",a);
    printf("b=%d \n",b);
    return 0;
}