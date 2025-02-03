#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==b==c)
    printf("Equilateral");
    else if (a==b!=c||a==c!=b||b==c!=a)
    printf("Isosceles");
    else
    printf("Scalene");
    return 0;
}