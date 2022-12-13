#include<stdio.h>
int main(int argc, char const *argv[])
{
    int w;
    scanf("%d",&w);
    printf("w =%d\n",w);
    if(w%2==0 && (w/2)%2==0){
        printf("possible");
    }
    else{
         printf("impossible");
    }
    return 0;
}
