#include <stdio.h>

int main(){
    int i;

    for(i=0; i<=100; i++){
        if((i!=0) && (i%15 == 0)){
            printf("fizzbuzz\n");
        }
        else if((i!=0) && (i%5 == 0)){
            printf("buzz\n");
        }
        else if((i!=0) && (i%3 == 0)){
            printf("fizz\n");
        }
        else{
            printf("%d\n", i);
        }
    }
    return 0;
}
