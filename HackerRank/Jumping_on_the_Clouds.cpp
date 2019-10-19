#include<stdio.h>
int main(){
    int count;
    while (scanf("%d",&count)!=EOF){
        int i, step = 0, arr[100];
        for (i = 0; i < count; i++){
            scanf("%d",&arr[i]);
        }
        i=0;
        while (i < count){
            if (i+2 < count){
                if (arr[i+2] == 0)
                    i=i+2;
                else
                    i++;
            }
            else
                i++;
            step++;
        }
        printf("%d\n", --step);
    }
    return 0;
}