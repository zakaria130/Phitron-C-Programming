#include<stdio.h>
int main()
{
    int i=1,a;
    printf("Give your number\n");
    scanf("%d",&a);
    for ( i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n",a,i,i*a);
    }
    

    return 0;
}
