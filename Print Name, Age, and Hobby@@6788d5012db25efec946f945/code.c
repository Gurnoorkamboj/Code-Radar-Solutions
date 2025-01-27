#include <stdio.h>
int main(){
    char name[30];
    int age;
    char hobby[30];
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %s\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}