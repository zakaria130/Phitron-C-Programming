#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        if(i%2==0)
        {
            printf("%d ",i);
        }
        else{
            printf("");
        }
    }
    return 0;
}
