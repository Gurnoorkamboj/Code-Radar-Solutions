#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    char x;
    char y;
    fgets(arr,sizeof(arr),stdin);
    scanf(" %c",&x);
    scanf(" %c",&y);
    for(int i=0;i<strlen(arr);i++){
        if (arr[i]==x){
            arr[i]=y;
        }
    }
    printf("%s",arr);
    return 0;
}