#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        ch=str[i];
        str[i]=str[l-i-1];
        ch=str[l-i-1];
    }
    printf("%s",str);
}