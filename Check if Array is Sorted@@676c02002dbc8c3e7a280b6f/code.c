#include<stdio.h>
int main(){
    int i,j;
    scanf("%d",&i);
    int arr[i];
    for (j=0;j<i;j++)
    scanf("%d",&arr[j]);
    for(j=0;j<i;j++)
    {
        if(arr[j]<=arr[j+1])
        printf("Sorted");
        return 0;
    }
    printf("Not Sorted");
    return 0;
    
}