#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int t;
    scanf("%d",&t);
    for (int i=0;i<=t;i++)
    {
        int n,ans=0;
        scanf("%d",&n);
        char b_num[1001];
        fgets(b_num,sizeof(b_num),stdin);
        for(int j=0;j<n;j++)
        {
            char a =b_num[j];
            char b =b_num[j+1];
            if(strcmp(a,0)==0 && strcmp(b,1)==0)
            {
                ans++;  
            } 
            if(strcmp(a,1)==0 && strcmp(b,0)==0)
            {
                ans++;  
            }
        }
        printf("%d",ans);
    }
    return 0;
}
