#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main(){
    int count;
    while (scanf("%d",&count)!=EOF){
        int pair=0, arr[100];
        for (int i = 0; i < count; i++){
            scanf("%d",&arr[i]);
        }
        for (int i = 0; i < count; i++){
            for (int j = i+1; j < count; j++){
                if (arr[i]==-1) {
                    break;
                }
                if (arr[i]==arr[j]){
                    arr[i]= -1;
                    arr[j]= -1;
                    pair++;
                    break;
                }
            }
        }
        printf("%d\n",pair);
    }
    return 0;
}