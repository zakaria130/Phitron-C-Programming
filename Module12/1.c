#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[15];
    scanf("%[^\n]s",name);
    printf("Your name is %s",name);
    return 0;
}
