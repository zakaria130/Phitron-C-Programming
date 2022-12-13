#include<stdio.h>
int main(int argc, char const *argv[])
{
    int array[6],i;
    for(i=0;i<6;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0] ,min=array[0];
    for ( i = 0; i < 6; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        else if (min>array[i])
        {
            min=array[i];
        }
        
        
    }
    printf("%d is maximum\n",max);
    printf("%d is min",min);
    int max2=min;
    for ( i = 0; i < 6; i++)
    {
        if (max>array[i])
        {
            if (array[i]>max2)
            {
                max2=array[i];
            }
            
        }
        
    }
    printf("\n%d is second maximum",max2);
    int min2=max;
    for ( i = 0; i <6; i++)
    {
        if (min<array[i])
        {
            if (min2>array[i])
            {
                min2=array[i];
            }
            
        }
        
    }
printf("\n%d is second minimum",min2)   ; 
    return 0;
}
