#include <stdio.h>
#include <string.h>

char str[20];
int main(){
    scanf("%s",str);
    for (int i=1;i<strlen(str);i++){
        for (int j=0;j<=i;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
}