#include <stdio.h>
#include <string.h>
int main()
{
   int num;
   scanf("%d",&num);
   int num2=0;
   while(num>0)
   {
       int num3=num%10;
       num2=num2*10+num3;
       num/=10;
       
   }
   printf("%d\n",num2);
   if(num==num) printf("palindrome");
   else printf("not a palindrome");
   return 0;
   
}