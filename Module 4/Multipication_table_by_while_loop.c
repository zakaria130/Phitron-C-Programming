#include<stdio.h>
int main()
{
    int i=1,a;
    printf("Give your number\n");
    scanf("%d",&a);
    while(i<=10)
    {
        printf("%d x %d = %d\n",a,i,i*a);
        i++;
    }
    return 0;
}
