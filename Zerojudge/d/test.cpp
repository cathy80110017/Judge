#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, k;
    while (scanf("%d %d",&n, &k)!=EOF){
        
        vector <int> a(n + 1);
        long b;

        for (int i = 1; i <= n; i++){
            scanf("%d",&a[i]);
        }
        
        for (int i = 0; i < k; i++){
            
            scanf("%ld",&b);
            int left = 1, right = n;
            
            if ((b < 1)||(b > a[n]))
                printf("0\n");

            else{
                while (left < right){
                    int mid = (left + right)/2;
                    if (b == a[mid])
                        break;
                    
                    else if (b > a[mid])
                        left = mid + 1;
                    
                    else if (b < a[mid])
                        right = mid - 1;
                    
                    //printf("%d %d\n", left, right);
                }
                if (b != a[(left + right)/2])
                    printf("0\n");
                
                else
                    printf("%d\n",(left + right)/2);
                
            }
        }   
    }
    return 0;
}