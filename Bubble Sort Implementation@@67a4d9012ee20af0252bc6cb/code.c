#include<stdio.h>
int main(){
    int n,i,k,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        for(k=0;k<n-1-i;k++)
        if(arr[k]>arr[k+1])
        temp=arr[k];
        arr[k]=arr[k+1];
        arr[k+1]=temp;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}