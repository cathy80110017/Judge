#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int count;
    while (scanf("%d",&count)!=EOF){
        int arr, max=0;
        for (int i = 0; i < count; i++){
            scanf("%d",&arr);
            if (arr > max){
                max = arr;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}