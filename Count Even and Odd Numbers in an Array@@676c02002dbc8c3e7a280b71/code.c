#include<stdio.h>
int main(){
    int i,j,even=0,odd=0;
    scanf("%d",&i);
    int a[i];
    for (j=0;j<i;j++){
        scanf("%d",&a[j]);
    }
    for (j=0;j<i;j++)
    {
        if (a[j]%2==0)
        {  
            even=even+1;
        }
        else
        {
        odd=odd+1;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}
