#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int count;

    scanf("%d",&count);

    for (int i = 0; i < count; i++){
        int times;
        int m[100];

        for (int j = 0; j < 100; j++){
            m[j] = 0;
        }
        
        scanf("%d",&times);

        for (int j = 0; j < times; j++){
            int num;

            scanf("%d",&num);

            m[num]++;
        }

        sort(m, m+100);
        reverse(m, m+100);

        printf("%d\n", m[0]);

    }
    return 0;
}