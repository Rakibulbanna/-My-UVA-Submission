#include <stdio.h>
int main()
{
    int i,t;
   scanf("%d",&t);
   int a,b,c;
   for (i=1;i<=t;i++)
   {
       scanf("%d%d%d",&a,&b,&c);
       if(a+b>c && b+c>a && a+c>b)
        printf("OK\n");
       else
        printf("Wrong!!\n");
   }
    return 0;
}