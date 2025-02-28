#include<stdio.h>
int main(){
    int i,j,max,min;
    scanf("%d",&i);
    int arr[i];
    for (j=0;j<i;j++)
    scanf("%d",&arr[j]);
    for (j=0;j<i;j++)
    {
        if(arr[j]>arr[j-1]){
            max=arr[j];
        }
        // else
        // {
        //     min=arr[j];
        // }
    }   
    printf("%d",max);
    return 0;
}