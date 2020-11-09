//Quick_Sort
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;

int n[1000];
int num;

void quicksort(int a, int b){                   //開頭(a)跟 結尾/基準(b)
    if (a < b) {
        int i = a - 1, j = a;                                   //i=開頭前一個, j=開頭
        while (j <= b){                                  //如果j還沒碰到基準
            if (n[j] <= n[b])                               //如果j小於基準
                swap(n[++i],n[j]);                              //j跟i的下一個交換   
            j++;
        }
        
        quicksort(a,i-1);
        quicksort(i+1,b);
    }
}

int main(){
    while (scanf("%d",&num)!=EOF){                      //輸入會有多少要排
        for (int i = 1; i <= num; i++){
            cin>>n[i];                                 //輸入陣列
        }
        quicksort(1,num);                               //呼叫sort,給開頭(1)跟結尾(count)
        for (int i = 1; i <= num; i++){
            printf("%d ",n[i]); 
        }
        printf("\n");        
    }
    return 0;
}