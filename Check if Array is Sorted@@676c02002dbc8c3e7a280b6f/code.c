#include<stdio.h>
int main(){
    int i,j;
    scanf("%d",&i);
    int arr[i];
    for (j=0;j<i;j++)
    scanf("%d",&arr[j]);
    for(j=0;j<i;j++)
    {
        if(arr[j-1]<=arr[j])
    }
        printf("Sorted");
        else
        printf("Not Sorted");
    
    return 0;
    
}