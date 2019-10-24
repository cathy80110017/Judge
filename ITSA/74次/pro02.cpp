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
        
        r = pow(pow(10 - a, 2) + pow(10 - b, 2), 1/2);
        if (r > 10){
            printf("0");
        }
        
        printf("%d\n", int(10-r));
        
    }
    
    return 0;
}