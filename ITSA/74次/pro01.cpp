#include<stdio.h>
#include<math.h>
int main(){
    double r;
    int b;
    long long money;
    double num = 0;

    scanf("%lf",&r);    
    scanf("%d",&b);
    scanf("%lld",&money);

    for (int i = 0; i < b; i++){
        num = money + num ; //本金＋前期
        num = num*(1 + r);
    }

        
    printf("%ld", long(num));
    
    return 0;
}