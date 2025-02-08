#include <stdio.h>
#include <string.h>

char str[20];
int main(){
    scanf("%[^\n]s", str); 
    for (int i=0;i<strlen(str);i++){
        printf("%c",str[i]);
        if (str[i] == ' '){
            printf("\n");
        }
   }
   printf("\n");
}