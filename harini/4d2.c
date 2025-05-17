#include <stdio.h>
#include<string.h>
int main()
{
    int x;
    int ref=0;
    scanf("%d",&x);
    for( int i=1 ; i<=x ; i++)
    {
        if(x%i==0)
        ref++;
    }
    if(ref==2) printf("its a prime");
    else printf("not a prime");
    return 0;
}
