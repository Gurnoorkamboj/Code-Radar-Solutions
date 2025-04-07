#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char x;
    int count=0;
    fgets(str,sizeof(str),stdin);
    scanf(" %c",&x);
    for(int i=0;i<strlen(str);i++){
        if (arr[i]==x){
            count++;
        }
    }
    printf("%d",count);
}