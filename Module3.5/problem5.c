
#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Give A, B and C respectively\n");
    scanf("%d%d%d",&A,&B,&C);
    printf("You are given A=%d, B=%d and C=%d\n",A,B,C);
    /*if (A>=B && A>=C)
    {
        if (B+C>A)
        {
            printf("YES");
        }
        else{
             printf("NO");
        }
        
    }
    
    else if (B>=A && B>=C)
    {
        if (A+C>B)
        {
            printf("YES");
        }
        else{
             printf("NO");
        }
        
    }
     else if (C>=A && C>=B)
    {
        if (A+B>C)
        {
            printf("YES");
        }
        else{
             printf("NO");
        }
        
    }*/
    if (A+B>C && B+C>A && A+C>B)
    {
        printf("YES");
    }
     else{
             printf("NO");
        }
    
    return 0;
}
