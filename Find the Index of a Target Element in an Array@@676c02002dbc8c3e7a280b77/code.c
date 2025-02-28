#include<stdio.h>
int main(){
    int i,j;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    scanf("%d",&arr[j]);
    int t,num=0;
    scanf("%d",&t);
    num=arr[t];
    printf("%d",num);
    return 0;
}