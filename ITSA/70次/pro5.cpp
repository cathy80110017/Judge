#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    int count;
    scanf("%d",&count);
    
    for (int i = 0; i < count; i++){
        int num, max, a;
        scanf("%d",&a);

        vector <int> w(a);
        
        for (int j = 0; j < w.size(); j++){
            scanf("%d",&w[j]);
            if (j == 0){
                max = w[j];                     //取第一個值
                num = w[j];
            }
            else{
                if ((num < 0)&&(num < w[j])){       //如果全負的，找最大
                    num = w[j];
                    max = w[j];
                }
                else if((num >= 0)&&(num +w[j] < 0)){   //如果從正的到負的，基準為0
                    num = 0;
                }
                else if (num + w[j] >= max){        //如果加起來大於負的，max變更
                    max = num + w[j];
                    num = num + w[j];
                }
                else{                   //num跟著跑
                    num = num + w[j];
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}