int isPrime(int num){
    if (num<=1){
        return 0;
    }
    for (int i=1;i<=num;i++){
        for (int j=1;j<=i;j++){
            if (i%j==0)
                return 1;    
        }
    }
}
int printPrimesInRange(int a,int b){
    for(int j=a;j<=b;j++)
    {
        if (isPrime(j))
        {
            printf("%d ",j);
        }
        else
        {
            printf("No prime numbers");
        }
    }
}