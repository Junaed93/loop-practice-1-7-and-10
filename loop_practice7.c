#include <stdio.h>
int main(){
    int input;
    printf("Enter a number:");
    scanf("%d", &input);
    while(input>0){
        int digit = input %10;
        printf("%d", digit);
        input /=10;
        if(input>0){

        }
    }
    printf("\n");    
}
    