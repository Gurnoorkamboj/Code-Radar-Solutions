#include<stdio.h>
int main(){
    int i,j,max;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    max=arr[0];
    for(j=1;j<i;j++){
        if (arr[j]>max)
        max=arr[j];
    }
    printf("%d",max);
    return 0;
}