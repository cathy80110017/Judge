#include<stdio.h>
#include<stdlib.h>
int main(){
    int count;
    while (scanf("%d",&count)!=EOF){
        int times = 0, i = 2, base = 0;
        while (count > 1){
            int pow = 0;
            while (count%i == 0){
                base = i;
                count = count/i;
                pow++;
            }
            if ((count%i != 0)&&(times == 0)){
                if (pow == 1){
                    printf("%d",base);
                    times++;
                }
                else if (pow > 1){
                    printf("%d^%d",base,pow);
                    times++;
                }
                i++;
                
            }
            else if (count%i != 0){
                if (pow == 1)
                    printf(" * %d",base);
                else if (pow > 1)
                    printf(" * %d^%d",base,pow);
                i++;
            }
        }
        printf("\n");
    }
    return 0;
}