#include<stdio.h>
int main(){
    int i,j,max,min;
    scanf("%d",&i);
    int arr[i];
    for (j=0;j<i;j++)
    scanf("%d",&arr[j]);
    max=arr[0];
    min=arr[0];

    for (j=0;j<i;j++)
    {
        if(arr[j]>max){
            max=arr[j];
        }
        if(arr[j]<min)
        {
            min=arr[j];
        }
    }   
    printf("%d %d",max,min);
    return 0;
}