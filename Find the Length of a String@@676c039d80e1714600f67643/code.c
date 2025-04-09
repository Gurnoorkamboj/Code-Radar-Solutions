#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    if (fgets(str,sizeof(str),stdin)=NULL)
    {
        printf("0");
        return 0;
    }
    str[strcspn(str, "\n")] = '\0';
    int count;
    count=strlen(str);
    if (count==0){
        return 0;
    }
    else{
    printf("%d",count);   
    }
    return 0;
}