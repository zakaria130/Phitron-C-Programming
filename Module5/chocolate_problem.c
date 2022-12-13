#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,pack;
    printf("Give your initial");
    scanf("%d",&n);
    pack=n;
while(pack>3){
    n+=pack/4;
    pack=(pack/4)+pack%4;

}
printf("%d",n);
    return 0;
}
