
#include <stdio.h>
#include<string.h>


int main() {
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++){
   char string1[20];
   scanf("%s",string1);
      int i, length;
      int flag = 0;
      length = strlen(string1);
      for(i=0;i < length ;i++){
         if(string1[i] != string1[length-i-1]) {
            flag = 1;
            break;
         }
      }
      if (flag==1){
         printf("Not Palindrome\n");
      } else {
         if (length>7)
         {
            printf("%c%d%c",string1[0],length-2,string1[length]);
         }
         else
         {
            printf("%s",string1);
         }
         

         
      }
    }
    return 0;
}