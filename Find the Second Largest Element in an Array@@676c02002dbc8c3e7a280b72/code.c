#include<stdio.h>
#include<limits.h>
int main(){
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<=a;i++){
        scanf("%d",&arr[i]);
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=a;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}}