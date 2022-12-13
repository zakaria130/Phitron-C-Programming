#include<stdio.h>
int main(int argc, char const *argv[])
{
    int A,B,C;
    printf("Give A, B and C respectively\n");
    scanf("%d%d%d",&A,&B,&C);
    printf("You are given A=%d, B=%d and C=%d\n",A,B,C);
    if (A>=B && A>=C)
    {
        if (A==B)
        {
            printf("A and B both are bigger");
        }
        else if (A==C)
        {
            printf("A and B both are bigger");
        }
        else{
            printf("A is biggest");
        }
        
    }
   else if (B>=A && B>=C)
    {
        if (A==B)
        {
            printf("A and B both are bigger");
        }
        else if (B==C)
        {
            printf("B and C aboth re bigger");
        }
        else{
            printf("B is biggest");
        }
        
    }
    else
    {
        if (C==A)
        {
            printf("A and C both are bigger");
        }
        else if (C==B)
        {
            printf("B and C both are bigger");
        }
        else{
            printf("C is biggest");
        }
        
    }
    
    return 0;
}
