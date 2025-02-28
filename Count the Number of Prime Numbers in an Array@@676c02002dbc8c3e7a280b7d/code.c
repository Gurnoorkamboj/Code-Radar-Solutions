#include<stdio.h>
int main(){
    int i,j,k,count;
    scanf("%d",&i);
    int arr[i];
    for (j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for (j=0;j<i;j++)
    {
        for(k=0;k<j;k++)
        {
            if(k%j==0)
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}