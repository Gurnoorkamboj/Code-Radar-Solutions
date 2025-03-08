#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}
isPrime(){
    int i;
    for (i=1;i<=num;i++)
    {
        if (num%i==0)
        return 1;
        else
        return 0;
    }
}