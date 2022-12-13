#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    
    char s1[102],s2[102];
    int i,x=0;
    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);
    for ( i = 0; i <strlen(s1); i++)
    {
        if (s1[i]>='A'&&s1[i]<='Z')
        {
            s1[i]+=32;
        }
        if (s2[i]>='A'&&s2[i]<='Z')
        {
            s2[i]+=32;
        }
        
    }
    
    for(i=0;i<strlen(s1);i++)
    {
        if (s2[i]>s1[i])
        {
            x=-1;
            break;
        }
        else if (s1[i]>s2[i])
        {
            x=1;
            break;
        }
        
        
    }
    printf("%d",x);
    return 0;
}
