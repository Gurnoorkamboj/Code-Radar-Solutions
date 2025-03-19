int printPrimesInRange(int a,int b){
    int found=0;
    for (int i=a;i<=b;i++){
        int count=0;
        for (int j=1;j<=i;j++){
            if (i%j==0){
                count=count+1;
                }   
        }
            if(count==2)
            {
            printf("%d ",i);
            found=1;
            }
}

if(!found){
    printf("No prime numbers");
}}