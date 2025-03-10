int isPrime(int num){
    int i;
    if (num<=1){
        return 0;
    }
    for(i=1;i<=num;i++){
        if(num%i==0){
            return 1;
        }
    }
}