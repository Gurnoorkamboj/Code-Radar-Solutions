#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int found=1;
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    for(int i=0;i<l/2;i++){
       if(str[i]!=str[l-i-1])
       found=0;
       break;
    }
    if (found){
        printf("Yes");
    }
    else{
        printf("No");
        }
}