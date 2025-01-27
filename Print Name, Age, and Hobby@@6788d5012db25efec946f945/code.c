#include <stdio.h>
int main(){
    char name[30];
    int age;
    char hobby[30];
    scanf("%c %d %c",&name,&age,&hobby);
    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c\n",hobby);
    return 0;
}