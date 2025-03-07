#include<stdio.h>
int main(){
    int i,j,k,count=0;
    scanf("%d",&i);
    int arr[i],primecount=0;
    for (j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for (j=0;j<i;j++)
    {
        for(k=1;k<=arr[j];k++)
        {
            if(arr[j]%k==0)
            count=count+1;
        }
    }
    if (count==2)
    {
    primecount=primecount+1;
    printf("%d",primecount);
    }
    return 0;   
}