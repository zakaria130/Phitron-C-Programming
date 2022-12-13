#include<stdio.h>
int main(int argc, char const *argv[])
{
    int array[10],i,even=0,odd=0;
    for(i=0;i<10;i++){
        scanf("%d",&array[i]);
if(array[i]%2==0)
    {
        even++;
    }
    odd=10-even;
    }
    printf("%d are even number\n",even);
    printf("%d are odd number\n",odd);

    return 0;
}
