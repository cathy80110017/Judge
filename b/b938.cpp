#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n,m;
    while (scanf("%d %d",&n,&m)!=EOF){
        int a[1000000];                 //要被殺的人
        for (int i = 0; i < m; i++){
            scanf("%d",&a[i]);
        }
        int b[1000000];                 //是否死亡
        for (int i = 0; i <= n; i++){
            b[i]=1;                     //初始化
        }   
        b[n]=0;                         //最後一個的後面為0
        for (int i = 0; i < m; i++){        //跑m次
            if ((a[i]==n)||(b[a[i]-1]==0)){
                printf("0u0 ...... ?\n");   //如果要殺的是最後一個
            }
            else{
                for (int j = a[i]; j <= n; j++){
                    if (b[j]==1){           //如果要殺的人是活的
                        printf("%d\n",j+1); //輸出
                        b[j]=0;             //變死的
                        break;              //跳出著個迴圈
                    }
                    else if(j>=n){
                        printf("0u0 ...... ?\n");   //如果要殺的人不存在
                        break;//
                    }
                }                
            }
        }
    }
}