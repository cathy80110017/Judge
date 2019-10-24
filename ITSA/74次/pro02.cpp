#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
int main(){
    int count;

    scanf("%d",&count);
    
    for (int i = 0; i < count; i++){
        
        float a, b, r = 0;

        scanf("%f %f",&a, &b);
        
        r = sqrt((10 - a)*(10 - a) + (10 - b)*(10 - b));
        
        if (r == 0){
            printf("10\n");
        }
        else if (r > 10){
            printf("0\n");
        }
        else{
            printf("%d\n", int(11-r));
        }
    }
    
    return 0;
}