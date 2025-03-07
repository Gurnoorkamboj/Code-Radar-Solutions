#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n],sum;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n;i>0;i--)
    {
        sum=arr[i];
    }
    if (sum==arr[i])
    printf("Yes");
    return 0;
}