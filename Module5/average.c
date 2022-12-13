#include<stdio.h>
int main(int argc, char const *argv[])
{
   int a;
   for ( a = 0; a <10; a++)
   {
     int i,n,sum=0,w;
   double avg;
    printf("Give your n\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&w);
        sum+=w;
    }
    avg=(double)sum/n;
    printf("%d\n",sum);
    printf("Average=%.2lf\n",avg);
   }
   

    return 0;
}
