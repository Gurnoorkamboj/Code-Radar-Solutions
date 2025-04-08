#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int found=0
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    for(int i=0;i<l/2;i++){
       str[i]==str[l-i-1];
       found=1;
    }
    if (found==1){
        printf("Yes");
    }
    else{
    printf("No")
}}