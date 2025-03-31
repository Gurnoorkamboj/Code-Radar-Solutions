#include<stdio.h>
int main(){
    int a,i,max,smin;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[a]);
    }
    for(int i=0;i<a;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}