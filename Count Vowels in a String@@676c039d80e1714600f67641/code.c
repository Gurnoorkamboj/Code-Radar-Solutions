#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    int count=0;
    for(int i=0;i<l;i++){
        char ch = str[i];
        if isalpha(ch){
        if(ch=="a"||ch=="e"||ch=="i"||ch=="o"||ch=="u"||ch=="A"||ch=="E"||ch=="O"||ch=="U"||ch=="I"){
            count++;
        }
    }}
    printf("%d",count);
}