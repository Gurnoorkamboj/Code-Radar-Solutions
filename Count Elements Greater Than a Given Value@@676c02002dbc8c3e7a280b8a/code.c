#include<stdio.h>
int main(){
    int k,n,i;
    scanf("%d %d",&n,&k);
    int arr[n],count=0;
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    for (i=0;i<n;i++)
    {
        if (arr[i]>k)
        count=count+1;
    }
    printf("%d",count);
    return 0;
}