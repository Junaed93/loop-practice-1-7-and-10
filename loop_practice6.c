#include <stdio.h>
int main(){
    char input;
    for(int i=1; ;i++){
        printf("Enter input %d:", i);
        scanf(" %c", &input);
        if(input == 'A'){
            break;
        }
        
    }
}   
