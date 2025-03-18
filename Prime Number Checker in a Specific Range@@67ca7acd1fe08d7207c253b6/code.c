int isPrime(int a,int b){
    for (int i=a;i<=b;i++){
        for (int j=a;j<=b;j++){
            if (j%i==0){
                return;
            }
        }
    }
}
int printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        printf("%d",i);
    }
}