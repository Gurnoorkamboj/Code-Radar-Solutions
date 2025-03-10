
int bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++)
    {
        for(int k=0;k<n-1-i;k++){
        if(arr[k]>arr[k+1])
        {
        int temp=arr[k];
        arr[k]=arr[k+1];
        arr[k+1]=temp;
        }
        }
    }
}
int printArray(int arr[],int n)
{
    for(int j=0;j<n;j++)
    {
        printf("%d",arr[j]);
    }
}
 
