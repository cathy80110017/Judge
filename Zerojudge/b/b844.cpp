#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int find(int q , int num[], int n){       //找第一個比q大的
    int left = 1, right = n;
    int mid; 
    while (left < right){
        if (q < num[1]){
            left = 0;
            right = 0;
            break;
        }
        mid = (left + right) / 2;
        //printf("l,r = %d %d\n", left,right);
        //printf("mid = %d\n", mid);
        if (q >= num[mid]){
            if (q < num[mid + 1]){
                left = mid;
                right = mid;
            }
            else{
                left = mid + 1;
            }
               
        }
        else{
            right = mid - 1;
        }
        //printf("l,r = %d %d\n", left,right);
    }
    mid = (left + right) / 2;
    return mid;
}

int main(){
    //ios :: sync_with_stdio(0) , cin.tie(0);
    int n, q;
    while (scanf("%d %d",&n, &q)!=EOF){
        int num[n + 1] = {0};
        for (int i = 1; i <= n; i++){
            scanf("%d",&num[i]);
        }
        sort(num + 1, num + n + 1);
    
        for (int i = 0; i < q; i++){
            int question;
            scanf("%d", &question);         //輸入要找的
            int ans = find(question, num, n);

            //printf("%d\n",ans);

            if (ans%2 == 0)
                printf("0\n");
            else
                printf("1\n");
        }
    }
    return 0;
}