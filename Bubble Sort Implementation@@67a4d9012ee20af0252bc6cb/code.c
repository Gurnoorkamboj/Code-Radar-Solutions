// #include<stdio.h>
// int main(){
    int j,k,temp=0;
//     scanf("%d",&i);
//     int arr[i];
//     for(j=0;j<i;j++)
//     scanf("%d",&arr[j]);
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-1-j;k++)
        if(arr[k]>arr[k+1])
        temp=arr[k];
        arr[k]=arr[k+1];
        arr[k+1]=temp;
    }
    
