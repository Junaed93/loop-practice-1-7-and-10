#include <stdio.h>
int main(){
    int N;
    int num;
    int sum = 0;
    printf("How many numbers:");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        printf("Enter the %d num:", i);
        scanf("%d", &num);
        sum += num;
    }
    if(N!=0){
        double average = (double) sum / 2;
        printf("The average of numbers is %.2f", average);
    }else{
        printf("Can't find average");
    }
}   