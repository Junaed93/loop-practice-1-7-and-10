#include <stdio.h>
int main(){
    int num;
    int i;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        int value = i % 2;
        printf("%d", value);
    }
}    