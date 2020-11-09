#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int find(int a, int* arr){
    if (arr[a] != 0){
        return arr[a];
    }
    else if (a == 1){
        arr[1] = 1;
        return arr[1];
    }
    else if (a == 2){
        arr[2] = 2;
        return arr[2];
    }
    else if (a == 3){
        arr[3] = 4;
        return arr[3];
    }
    else{
        arr[a] = find(a - 1, arr) + find(a - 2, arr) + find(a - 3, arr);
        return arr[a];
    }
}

int main(){
    int count;
    int arr[51];
    memset(arr, 0, 50*sizeof(int));
    scanf("%d",&count);
    for (int i = 0; i < count; i++){
        int a, ans;
        scanf("%d", &a);
        ans = find(a, arr);
        printf("%d\n", ans);
    }
    
    return 0;
}