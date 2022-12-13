#include<stdio.h>
int my_recurtion(int x)
{
   printf("%d ",x);
   if (x==1)
   {
    return 1;
   }
   else if (x>1)
   { 
    return my_recurtion(x-1);
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    my_recurtion(n);
    return 0;
}
