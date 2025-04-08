#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    char x;
    fgets(str,sizeof(str),stdin);
    scanf(" %c",&x);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        char ch=str[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            str[i]=x;
        }        
    }
    printf("%s",str);
}