int isPrime(int num){
    if (num<=1){
        return 0;
    }
    for (int i=1;i<=num;i++){
        int count=0;
        for (int j=1;j<=i;j++){
            if (i%j==0)
                count++;    
        }
    }
}
int printPrimesInRange(int a,int b){
    for(int j=a;j<=b;j++)
    {
        if (count==2)
        {
            printf("%d ",j);
        }
        else
        {
            printf("No prime numbers");
        }
    }
}