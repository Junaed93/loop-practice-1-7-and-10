#include <stdio.h>
int main(){
    int num;
    int i;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        printf("%d", i);
    }
}