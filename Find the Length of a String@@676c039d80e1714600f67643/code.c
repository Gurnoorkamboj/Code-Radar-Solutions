#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int count;
    count=strlen(str);
    if (count==0){
        printf("0\n");
        return 0;
    }
    else{
    printf("%d",count);   
    }
    return 0;
}