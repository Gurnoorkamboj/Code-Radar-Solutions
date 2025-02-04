#include <stdio.h>
int main(){
    char num;
    scanf("%c",&num);
    switch(num){
        case 'R': printf("Stop\n"); break;
        case 'G': printf("Go\n"); break;
        case 'Y': printf("Slow Down\n"); break;
        default: printf("Invalid input\n"); break;
    }
    return 0;
}