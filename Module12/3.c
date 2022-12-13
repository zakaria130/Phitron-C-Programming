#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[2000];
    scanf("%[^\n]s",name);
    // fgets(name,sizeof(name),stdin);
    // gets(name);
    int i;
    for ( i = 0; name[i]!='\0'; i++)
    {
        if (name[i]>='a'&&name[i]<='z')
        {
            name[i]-=32;
        }
        
    }
    printf("%s",name);
    
    return 0;
}
