#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str1[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        for(int j=(strlen(str)-1);j>=0;j--){
            str1[j]=str[i];
        }
    }
    printf("%s",str1);
}