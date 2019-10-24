#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int times;
    float al[6], bl[6];
    int a[2][4], b[2][4];
    scanf("%d",&times);

    for (int i = 0; i < 4; i++){
        scanf("%d %d", &a[0][i], &a[1][i]);
    }
    int k = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 3; j > i; j--){
            al[k] = pow(pow(a[0][i]-a[0][j], 2) + pow(a[1][i]-a[1][j], 2), 1/2);
            k++;
        }
    }

    sort(al, al+6);

    if ((al[0] == al[1])&&(al[0] == al[2])&&(al[0] == al[3])&&(al[4] == al[5])){
        
        printf("Yes %d\n", int(times*times*pow(al[0], 2) ) );
    }
    else{
        printf("No\n");
    }

    for (int i = 0; i < 4; i++){
        scanf("%d %d", &b[0][i], &b[1][i]);
    }

    k = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 3; j > i; j--){
            bl[k] = pow(pow(b[0][i]-b[0][j], 2) + pow(b[1][i]-b[1][j], 2), 1/2);
            k++;
        }
    }

    sort(bl, bl+6);

    if ((bl[0] == bl[1])&&(bl[0] == bl[2])&&(bl[0] == bl[3])&&(bl[4] == bl[5])){
        
        printf("Yes %d\n", int(times*times*pow(bl[0], 2) ) );
    }
    else{
        printf("No\n");
    }

    return 0;
}