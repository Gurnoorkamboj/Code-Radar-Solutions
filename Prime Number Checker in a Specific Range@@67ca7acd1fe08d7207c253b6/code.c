int isPrime(int num){
    for (int i=1;i<=num;i++){
        for (int j=1;j<=i;j++){
            if (i%j==0)
                return ;    
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