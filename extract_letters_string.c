#include <stdio.h>
#include <string.h>

char str[20];
int main(){
    scanf("%s",str);
     for (int i=0;i<strlen(str);i++){
        printf("%c\n",str[i]);
    }
}