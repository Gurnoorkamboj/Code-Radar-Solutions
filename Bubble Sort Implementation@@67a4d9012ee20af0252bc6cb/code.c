#include<stdio.h>
int main(){
    int i,j,k,temp=0;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    scanf("%d",&arr[j]);
    for(j=0;j<i-1;j++)
    {
        for(k=0;k<i-1-j;k++)
        if(arr[k]>arr[k+1])
        temp=arr[k];
        arr[k]=arr[k+1];
        arr[k+1]=temp;
    }
    for (j = 0; j < i; j++) {
        printf("%d ", arr[j]);
    }
    return 0;
}