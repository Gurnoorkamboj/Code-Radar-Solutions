#include <stdio.h>
int main(){
    int a,b,sum,div,sub,multiply;
    scanf("%d %d",&a,&b);
    char ope;
    scanf("%c",&ope);
    switch(ope){
        case '+':
        sum=a+b;
        printf("%d\n",sum);
        break;
        case '-':
        sub=a-b;
        printf("%d\n",sub);
        break;
        case '*':
        multiply=a*b;
        printf("%d\n",multiply);
        break;
        case '/':
        div=a/b;
        printf("%d\n",div);
        break;
    }
}