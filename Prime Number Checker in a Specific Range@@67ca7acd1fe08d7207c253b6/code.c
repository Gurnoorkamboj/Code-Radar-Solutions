int isPrime(int num){
    if (num<=1){
        return 0;
    }
    for (int i=1;i<=num;i++){
        int count,found=0;
        for (int j=1;j<=i;j++){
            if (i%j==0)
                count=count+1;   
        }
            if(count==2){
            printf("%d ",i);
            found=1;
}}}

if(!found){
    printf("No prime numbers");
}