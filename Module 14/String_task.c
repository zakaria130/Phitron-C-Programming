#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s[102];
    // scanf("%[^\n]s");
    fgets(s,sizeof(s),stdin);
    for(int i=0;i<strlen(s)-1;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
        if (!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'))
        {
            printf(".%c",s[i]);
        }
        
    }
    

    return 0;
}
