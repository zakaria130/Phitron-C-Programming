#include<stdio.h>
int main()
{
    int m ,i,j;
    scanf("%d",&m);
    printf("*\n");
    for ( i = 1; i <=m-2; i++)
    {printf("*");
        for ( j = 0; j < i-1; j++)
        {
            printf(" ");
        }
        printf("*\n");
        
    }
    for ( i = 1; i <=m; i++)
    {
        printf("*");
    }
    

    
    return 0;
}
