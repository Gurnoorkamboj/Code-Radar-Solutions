#include <stdio.h>
int main(){
    int i,j,count=0;
    scanf("%d",&j);
    for (i=1;i<=j;i++)
    {
        if (j%i==0)
        count++;
    }
    if (count==2)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}