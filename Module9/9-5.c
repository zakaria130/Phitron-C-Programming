#include<stdio.h>
int main()
{
    int sub,i,j,s;
    float avg,x,sum;
    printf("Initiate no of subject");
    scanf("%d",&s);
    for ( i = 1; i <= 10; i++)
    {sum=0,x=0,sum=0;
        for ( j = 0; j <s; j++)
        {
            scanf("%f",&x);
            sum+=x;
        }
        avg=sum/s;
        printf("%f",avg);
        
        

    }
    
    return 0;
}
