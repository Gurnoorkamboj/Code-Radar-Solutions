int fibonacciSeries(int n){
    int i,a=0,b=1,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}