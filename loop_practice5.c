#include <stdio.h>
int main(){
    int x;
    int y;
    printf("Enter the value of X:");
    scanf("%d", &x);
    printf("Enter the value of Y:");
    scanf("%d", &y);
    while(x!=y){
        printf("Square of %d: %d\n", x, x*x);
        if(x<y){
            x++;
        }else{
            x--;
        }
    }

    printf("Reached!\n");

}    