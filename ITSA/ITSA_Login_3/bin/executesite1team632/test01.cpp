#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    int count;
    while (scanf("%d",&count)!=EOF){
        for (int i = 0; i < count; i++){
            int a, num = 0;
            scanf("%d",&a);
            for (int j = a; j > 0; j--){
                num = num + j;
            }
            printf("%d\n",num);
        }
    }
    return 0;
}