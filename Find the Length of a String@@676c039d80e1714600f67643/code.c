#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    scanf("%s",str);
    int count=strlen(str);
    if (count==0){
        return 0;
    }
    else{
    printf("%d",count);   
    }
}