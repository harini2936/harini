#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int y;
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    printf("%d",count);
    num=y;
    int r=num%10;
    int dub=1;
    for(int i=1;count<=count;i++)
    {
        dub=dub*r;
    }
    printf("%d",dub);
}