#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n];
    int *pointer_of_a[n];
    for(int j=0;j<n;j++)
    {
        pointer_of_a[j]=&a[j];
    }
    for(int j=0;j<n;j++)
    {
        scanf("%d",pointer_of_a[j]);
    }
    for(int j=0;j<n;j++)
    {
        printf("%d\t",*pointer_of_a[j]);
    }
    return 0;
}
