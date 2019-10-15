#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(void){
    int count;
    int valley = 0 , horizon = 0;

    scanf("%d" , &count);

    for (int i = 0 ; i <= count ; i++){
        char step;
        scanf("%c", &step);
        
        if (step == 'U'){
            horizon ++;
            if (horizon == 0)
                valley ++;             
        }

        if (step == 'D')
            horizon --;
            
    }

    printf("%d\n" , valley);

    return 0;
}