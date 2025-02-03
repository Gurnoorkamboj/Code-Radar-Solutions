#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num%5==0 && num%11==0)
    printf("Divisible");
    else if (num%5==0 || num%11==0)
    printf("Not Divisible");
    return 0;
}