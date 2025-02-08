#include <stdio.h>

char str[20];
int n;
int main(){
    scanf("%s",str);
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("%s",str);
        printf("\n");
    }
}