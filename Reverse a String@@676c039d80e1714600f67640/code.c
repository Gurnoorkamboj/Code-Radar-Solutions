#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str1[100];
    fgets(str,sizeof(str),stdin);
    s=strlen(str);
    for(int i=0;i<s;i++){
        str1[s]=str[i];
        str[i]=str1[s];
    }
    printf("%s",str1);
}