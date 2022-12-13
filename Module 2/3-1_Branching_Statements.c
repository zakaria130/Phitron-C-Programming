// even odd test
/* 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,rem;
    printf("Give your number\n");
    scanf("%d",&a);
    printf("Your number is %d\n",a);
    rem=a%2;
    if(rem==0){
        printf("Your number is Even");
    }
    else
    {
         printf("Your number is odd"); 
    }
    
    return 0;
}
*/
// which is large?
#include<stdio.h>
int main()
{
    int a,b;
    printf("Give your numbers ");
    scanf("%d%d",&a,&b);
    printf("Your numbers are %d and %d\n",a,b);
    if (a>b)
    {
        printf("a is large than b");
    }
    else{
        printf("b is large than a");
    }
    return 0;
}
