#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    fgets(str,sizeof(str),stdin);
    l=strlen(str);
    for(int i=0;i<l;i++){
        ch=str[i];
        str[i]=str[l-i-1];
        ch=str[l-i-1];
    }
    printf("%s",str);
}