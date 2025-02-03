#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b==c)
    printf("Equilateral");
    else if (a*a=b*b+c*c)
    printf("Isosceles");
    else
    printf("Scalene");
    return 0;
}