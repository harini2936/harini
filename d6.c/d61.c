#include <stdio.h>
int main()
{
    int n;
    int x=1;
    
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
            for(int k=1;k<=x;k++){            }
        }
        printf("*");
        x+=2;
    }
    printf("\n");
    return 0;
}