#include<stdio.h>
int main(){
    int i,j,even=0,odd=0;
    scanf("%d",&i);
    int a[i];
    for (j=0;j<i;i++){
        scanf("%d",&j);
    }
    for (j=0;j<i;j++)
    {
        if (a[i]%2==0)
        even=even+1;
        else
        odd=odd+1;
    }
    printf("%d %d",even,odd);
    return 0;
}
