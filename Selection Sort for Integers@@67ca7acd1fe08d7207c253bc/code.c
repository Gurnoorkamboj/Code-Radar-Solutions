int selectionSort(int arr[],int n){
    for(int j=0;j<n;j++){
        for(int k=0;k<n-1-j;k++)
        if (arr[k]>arr[k+1])
        int temp=arr[k];
        arr[k]=arr[k+1];
        arr[k+1]=temp;
    }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i])
    }
}