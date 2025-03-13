void bubbleSort(char arr[],int n){
    for (int j=0;j<n-1;j++)
    {
        for(int k=0;k<n-1-j;k++){
            if (arr[k]=arr[k+1])
            {
                char temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}